#pragma once

class Student
{
// the variable is private by default. 

	int age;


public:
	int rollnumber;

	void DisplayInfo();

	void SetAge(int a) { age = a; }
	int GetAge() { return age; }







};