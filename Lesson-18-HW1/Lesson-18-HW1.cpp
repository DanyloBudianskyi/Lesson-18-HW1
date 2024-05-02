#include <iostream>
#include "Employee.h"

int main()
{
    int N = 5;
    Employee* arr = new Employee[5]{
        { "Smith", {12, 5, 1973}, "Manager", 3200, "Higher" },
        { "Johnson", {21, 9, 1965}, "Analyst", 2900, "Higher" },
        { "Williams", {17, 7, 1958}, "Developer", 3500, "Higher" },
        { "Brown", {8, 11, 1968}, "Tester", 2700, "Secondary" },
        { "Davis", {30, 3, 1977}, "Director", 4800, "Higher" }
    };
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (2024 - arr[i].birthday.year > 60) {
            ++count;
            cout << "Employee #" << i + 1 << endl;
            arr[i].showEmployee();
        }
    }
}