#pragma once
#include "Date.h"
using namespace std;

struct Employee {
	char lastName[50] = "";
	Date birthday;
	char status[30] = "";
	int salary = 0;
	char education[30] = "";
};