const readline = require('readline');

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

var count = 0, n, t, i, j;
var dataObj = {};
var keyArr = [];
var valueArr = [];

rl.on('line', function(input){
	if(count == 0){
		n = Number(input);

		i = 0;
	}else if(count == 1){
		t = Number(input);

		j = 0;
	}else{
		if(i < n){
			keyArr.push(String(input));
			valueArr.push(Number(i) + 1);
		}else{
			if(j < t){
				var inputNum = Number(input);

				if(valueArr.includes(inputNum)){
					console.log(keyArr[inputNum - 1]);
				}else{
					console.log(keyArr.indexOf(input) + 1);
				}
			}
			if(j == t - 1){
				rl.close();
			}
			j++;
		}
		i++;
	}
	count++;
	console.log("n : ", n, ", t : ", t, ", input : ", input);
	console.log("i : ", i,", j : ",  j,", count : ", count, keyArr, valueArr)
});
