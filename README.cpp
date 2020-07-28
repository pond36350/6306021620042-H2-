#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	string name;
	int salary,sale,cp;
	cout << "***Homework 2***************" << endl;
	cout << "Enter name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Commission Percent : ";
	cin >> cp;
	int total_revenue = ((sale * cp)/100) + salary;
	cout << "------output------------" << endl;
	cout << "Your name = " << name << endl;
	cout << "Total Revenue : " << total_revenue <<" Bath" << endl;
	return(0);
}
