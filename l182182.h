#include<iostream>
using namespace std;

class Student
{
	static int counter;
	int ID;
	float* quizScore;
	int quizCapacity;
	int quizTaken;
	float GPA;

public:

	Student();
	Student(int,float);
	Student(const Student&);
	~Student();
	
	void addQuizScore(float);
	void setGPA(float);
	float getGPA() const;
	void print() const;
	bool compare(Student);
	void updateScore(int, float);
};

void printArray(Student*, const int);
Student* returnNerds(Student* , const int, int&);
void sort(Student*, const int);
Student copyStudent(const Student);