#include <iostream>
#include "Header_Files/Student.h"


using namespace std;

int main()
{
	string Name_1{ "none" };
	int Age{ 0 };
	int RollNumber{0};

	Student Student_1(Name_1, Age, RollNumber);
	Student Student_2;
	Student Student_3;

	cout << "\nStudents: \n";
	Student_1.DisplayInfo();
	cout << endl;
	Student_2.DisplayInfo();
	cout << endl;
	Student_3.DisplayInfo();
	cout << endl;
	cout << "Number of Students Enrolled: "; Student::StudentCount();
	cout << endl;
	cout << endl;

	system("pause");


	return 0;
}
