#include "Student.h"

void main()
{
	cout << "This is object s1 created by default constructor" << endl << endl;
	Student s1; // default constructor
	float temp = 0.0f;
	cout << "Adding quiz scores as 10 7 3 1 to s1 and we have space of only 3 quizes" << endl;
	s1.addQuizScore(10);
	s1.addQuizScore(7);
	s1.addQuizScore(3);
	s1.addQuizScore(1);

	s1.print();
	system("pause");
	system("CLS");

	cout << "This is object s2 created by parameterized constructor as (4,2)" << endl << endl;
	Student s2(4,2); // parameterized constructor

	s2.addQuizScore(9);
	s2.addQuizScore(4);
	s2.addQuizScore(6);

	s2.print();
	system("pause");
	system("CLS");

	cout << "This is object s3 created by copy constructor from s1" << endl;
	Student s3 = s1;
	s3.print();
	system("pause");
	system("CLS");

	cout << "Updating score of s1" << endl << endl;
	s1.updateScore(1,3);
	s1.print();
	system("pause");
	system("CLS");

	cout << "Trying to update score of s3 and getting an error as expected" << endl << endl;
	s3.updateScore(10,3);
	system("pause");
	system("CLS");

	cout << "This is comparison of s1 with s2 on basis of GPA" << endl << endl;
	cout << s1.compare(s2) << endl;
	system("pause");
	system("CLS");

	cout << "Updating GPA of s3 and printing s1 & s3 " << endl << endl;
	s3.setGPA(3.0);
	s1.print();
	s3.print();
}

