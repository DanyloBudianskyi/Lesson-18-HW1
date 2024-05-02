#pragma once
#include "Date.h"
using namespace std;

struct Employee {
	char lastName[50] = "";
	Date birthday;
	char status[30] = "";
	int salary = 0;
	char education[30] = "";

	void showEmployee() {
		cout << "Last name: " << lastName << endl;
		cout << "Birthday: " << birthday.toString() << endl;
		cout << "Status: " << status << endl;
		cout << "Salary: " << salary << endl;
		cout << "Education: " << education << endl << endl;
	}
};