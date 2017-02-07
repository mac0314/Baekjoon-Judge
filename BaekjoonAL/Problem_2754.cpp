#include <iostream>
#include <cstring>
#include <iomanip>


#define SUBJECT_NAME_MAX 101
#define GRADE_NAME_MAX 5

using namespace std;

int main(void) {
	float cLanguageGrade = 0;
	char grade[GRADE_NAME_MAX];


	cin >> grade;

	int gradeNameLength = strlen(grade);
		
	if (gradeNameLength > 1) {

		float tempGrade = 0;

		switch (grade[0])
		{
		case 'A': {
			cLanguageGrade += 4;
			break;
		}
		case 'B': {
			cLanguageGrade += 3;
			break;
		}
		case 'C': {
			cLanguageGrade += 2;
			break;
		}
		case 'D': {
			cLanguageGrade += 1;
			break;
		}
		default:
			break;
		}

		switch (grade[1])
		{
		case '+': {
			//cout << '+' << endl;
			cLanguageGrade += 0.3;
			break;
		}
		case '0': {
			//cout << '0' << endl;
			break;
		}
		case '-': {
			//cout << '-' << endl;
			cLanguageGrade -= 0.3;
			break;
		}
		default:
			break;
		}

	}
	else {
		cLanguageGrade += 0;
	}


	cout << fixed;
	cout.precision(1);
	cout << setiosflags(ios::showpoint) << cLanguageGrade << endl;

	return 0;
}