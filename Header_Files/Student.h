#pragma once
#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include "Header_Files/Account.h"
#include <cstring>

using namespace std;
class Student
{



	// These variables are private by default. 
	//student variables:
	int Age{ 0 };
	string Name{"No name associated with this student"};
	int rollnumber = studentcount;

public:
Account account;
 static int studentcount;
 static int StudentCount(){cout << studentcount; return studentcount; }

	//constructor: (how is this object instanced)
	inline Student(){string name = GetName(); studentcount++;}
	inline  Student(string name, int roll) : Name(name), rollnumber(roll) {studentcount++;}
	inline  Student(string name, int age, int roll) :Name(name), Age(age), rollnumber(roll) {studentcount++; }


	//student methods:
	void DisplayInfo()
	{
		cout << GetName() << endl;
		cout << GetAge() << endl;
		cout << GetRollNum() << endl;
	}


	//good old getters and setters.
	string GetName() { return Name; }
	void SetAge(int a) { Age = a; }
	int GetRollNum() { return rollnumber; }
	int GetAge() { return Age; }







};

int Student::studentcount{0};