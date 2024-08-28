#include<iostream>
using namespace std;
void gpa() {
	int courses;
	double grade[50];
	double credit[50];
	double points[50];
	double totalgrade = 0.0;
	double totalcredit = 0.0;
	
	cout << "Enter number of courses: " << endl;
	cin >> courses;
	cout << "Enter grade and credit hours for each course: " << endl;
	for (int i = 0; i < courses; i++) {
		cout << "Course " << i + 1 << " grade: ";
		cin >> grade[i];
		cout << "Course " << i + 1 << " credit hours: ";
		cin >> credit[i];		
		
		if (grade[i] >= 97) {
			points[i] = 4.0;
		}
		else if (grade[i] >= 93 && grade[i] < 97) {
			points[i] = 4.0;
		}
		else if (grade[i] >= 89 && grade[i] < 93) {
			points[i] = 3.7;
		}
		else if (grade[i] >= 84 && grade[i] < 89) {
			points[i] = 3.3;
		}
		else if (grade[i] >= 80 && grade[i] < 84) {
			points[i] = 3.0;
		}
		else if (grade[i] >= 76 && grade[i] < 80) {
			points[i] = 2.7;
		}
		else if (grade[i] >= 73 && grade[i] < 76) {
			points[i] = 2.3;
		}
		else if (grade[i] >= 70 && grade[i] < 73) {
			points[i] = 2.0;
		}
		else if (grade[i] >= 67 && grade[i] < 70) {
			points[i] = 1.7;
		}
		else if (grade[i] >= 64 && grade[i] < 67) {
			points[i] = 1.3;
		}
		else if (grade[i] >= 60 && grade[i] < 64) {
			points[i] = 1.0;
		}
		else {
			points[i] = 0.0;
		}
		totalgrade += points[i] * credit[i];
		totalcredit += credit[i];
	}
	double gpa = totalgrade / totalcredit;
	cout << endl;
	cout << "Your GPA is: " << gpa << endl;
	cout << endl << endl;
}
void cgpa() {
	int semesters;
	cout << "Enter the number of semesters: ";
	cin >> semesters;

	double semesterGPA[50];
	double semesterCredits[50];
	double totalCredits = 0.0;
	double weightedGPA = 0.0;

	
	for (int i = 0; i < semesters; i++) {
		cout << "Enter GPA for Semester " << i + 1 << ": ";
		cin >> semesterGPA[i];
		cout << "Enter total credit hours for Semester " << i + 1 << ": ";
		cin >> semesterCredits[i];

		weightedGPA += semesterGPA[i] * semesterCredits[i];
		totalCredits += semesterCredits[i];
	}

	double cgpa = weightedGPA / totalCredits;
	cout << endl;
	cout << "Your CGPA is: " << cgpa << endl;
	cout << endl << endl;
}

int main() {
	while (true) {
		int choice;
		cout << "Welcome to our C/GPA Calculator!\n";
		cout << "-----------------------------------------" << endl;
		cout << "1)Calculate GPA\n2)Calculate CGPA\n3)Exit\n";
		cout << "Choose an option: " << endl;
		cin >> choice;

		if (choice == 1) {
			gpa();
		}
		else if (choice == 2) {
			cgpa();
		}
		else if (choice == 3) {
			return 0;
		}
		else {
			cout << "ERROR" << endl;
			cout << endl << endl;
		}
	}
}