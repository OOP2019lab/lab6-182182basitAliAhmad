#include "Student.h"

int Student::counter = 0;

Student::Student() // default constructor
{
	counter++;
	ID = counter;
	quizCapacity = 3;
	quizTaken = 0;
	quizScore = new float[quizCapacity];
	memset(quizScore,-1,quizCapacity);
	GPA = -1;
}

Student::Student(int mQuizCapacity, float mGPA) // parametrized constructor
{
	counter++;
	ID = counter;
	GPA = mGPA;
	quizCapacity = mQuizCapacity;
	quizTaken = 0;
	quizScore = new float[quizCapacity];
	memset(quizScore,-1,quizCapacity);
}

Student::Student(const Student &ori) // copy constructor
{
	ID = ori.ID;
	quizCapacity = ori.quizCapacity;
	quizTaken = ori.quizTaken;
	quizScore = new float[quizCapacity]; // new memory allocation
	for (int i = 0; i < quizCapacity; i++)
		quizScore[i] = ori.quizScore[i]; // deep copy
	GPA = ori.GPA;
}

Student::~Student() //destructor
{
	counter--;
	//delete[]quizScore;
	quizScore = nullptr;

	// deallocation is disabled as our it deallocates the memory and make our pointer dangling when destructor is invoked while returning. It causes the junk to appear. commenting deallocation makes everything work fine.
}

void Student::addQuizScore(float score) // adds quiz score if there is space in array
{
	if (quizTaken < quizCapacity)
	{
		quizScore[quizTaken] = score;
		quizTaken++;
	}
	else
		cout << "No space to add new score" << endl;
}

void Student::setGPA(float mGPA) // setter
{
	GPA = mGPA;
}

float Student::getGPA() const // getter
{
	return GPA;
}

void Student::print() const
{
	cout << "Student ID: " << ID <<endl;
	cout << "GPA: " << GPA << endl;
	cout << "Quizzes Taken: " << quizTaken << endl;
	for (int i = 0; i < quizTaken; i++)
		cout << "Quiz " << i + 1 << " score: " << quizScore[i] << endl;
}

bool Student::compare(Student other)
{
	return (GPA > other.GPA);
}

void Student::updateScore(int quizNumber, float score)
{
	quizNumber--;
	if (quizScore[quizNumber] != -1 && quizNumber < quizCapacity)
		quizScore[quizNumber] = score;
	else
		cout << "Quiz " << quizNumber+1 << " not taken" << endl;
}




void printArray(Student* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i].print();
		cout << endl << endl;
	}
}

Student* returnNerds(Student* arr, const int size, int &nSize)
{
	nSize = 0;
	Student* temp = new Student[size];
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getGPA() > 2.0)
			temp[nSize++] = copyStudent(arr[i]);
	}
	return temp;
}

void sort(Student* arr, const int size) // bubble sorting
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j].getGPA() < arr[j + 1].getGPA())
			{
				Student temp = arr[j];
				arr[j] = copyStudent(arr[j + 1]);
				arr[j + 1] = copyStudent(temp);
			}

		}

	}

}

Student copyStudent (Student dummy) // it returns the object the copy constructor allows us to deep copy the contents while returning
{
	return (dummy);
}





