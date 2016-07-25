
var cheerio = require('cheerio');
var request = require('request');

var fs = require('fs');

var url = 'http://web.archive.org/web/20140301191716/http://pokemondb.net/pokedex/national';


request(url, function(error, response, html){
		if (error) {
			console.log(error);
  	}else{
      //console.log(html);
			var $ = cheerio.load(html);

      var text = "";

      $('span.infocard-tall').each(function(i, element){
        var a = $(this);

        //console.log(a.children('a.ent-name').prev().prev().text() + "  " + a.children('a.ent-name').text() + "  " + a.children('small.aside').text() + "\n");

				var nArray = a.children('a.ent-name').prev().prev().text().split('#');

				var idx = (Number(nArray[1]) - 1);

				var pokemonName = a.children('a.ent-name').text();


				var pattern =  /[(가-힣ㄱ-ㅎㅏ-ㅣa-zA-Z0-9)*]/gi;

				var property = a.children('small.aside').text().replace(' · ', ' ');

        text += 'strcpy(pokemon[' + idx + '], "' + pokemonName + '\\n' + property + '");\n';
      });

      fs.writeFile('./results.txt', text, function(error){
        if(error){
          console.log(error);
        }else{
          console.log("Complete file write!");
        }
      });

		}
});
