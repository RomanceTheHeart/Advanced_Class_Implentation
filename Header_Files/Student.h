#pragma once
#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std; 
class Student
{



	// the variable is private by default. 


	//student variables:



public:


	int Age{ 0 };
	string Name; 
	int rollnumber{0};

	//constructor: (how is this object instanced)
	Student()=default;
	Student(string name, int roll) { name = Name; roll = rollnumber; }
	Student(string name, int age, int roll) { name = Name; age = Age; roll = rollnumber; }
	





	//student methods:
	void DisplayInfo();

	//good old getters and setters.
	void SetAge(int a) { Age = a; }

	int GetAge() { return Age; }







};