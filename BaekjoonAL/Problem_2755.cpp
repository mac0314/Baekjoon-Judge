#include <iostream>
#include <cstring>
#include <iomanip>


#define SUBJECT_NAME_MAX 101
#define GRADE_NAME_MAX 5

using namespace std;

int main(void) {
	int n = 0;
	int credit = 0;
	int totalCredit = 0;
	float totalGrade = 0;
	float averageGrade = 0;
	char subject[SUBJECT_NAME_MAX];
	char grade[GRADE_NAME_MAX];
	

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> subject >> credit >> grade;

		totalCredit += credit;


		int gradeNameLength = strlen(grade);
		/*
		cout << "idx : " << i << endl;
		cout << "totalCredit : " << totalCredit << endl;
		cout << "gradeNameLength : " << gradeNameLength << endl;
		cout << "grade[0] : " << grade[0] << endl;
		cout << "grade[1] : " << grade[1] << endl;
		*/
		if (gradeNameLength > 1) {

			float tempGrade = 0;

			switch (grade[0])
			{
			case 'A': {
				tempGrade += 4;
				break;
			}
			case 'B': {
				tempGrade += 3;
				break;
			}
			case 'C': {
				tempGrade += 2;
				break;
			}
			case 'D': {
				tempGrade += 1;
				break;
			}
			default:
				break;
			}

			switch (grade[1])
			{
			case '+': {
				//cout << '+' << endl;
				tempGrade += 0.3;
				break;
			}
			case '0': {
				//cout << '0' << endl;
				break;
			}
			case '-': {
				//cout << '-' << endl;
				tempGrade -= 0.3;
				break;
			}
			default:
				break;
			}

			totalGrade += tempGrade * credit;


			//cout << "tempGrade : " << tempGrade << endl;
		}
		else {
			totalGrade += 0;
		}

		//cout << "totalCredit : " << totalCredit << endl;
		//cout << "totalGrade : " << totalGrade << endl;
	}

	averageGrade = totalGrade / totalCredit;

	cout << fixed;
	cout.precision(2);
	cout << setiosflags(ios::showpoint) << averageGrade << endl;

	return 0;
}