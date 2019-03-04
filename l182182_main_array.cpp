//#include "Student.h"
//
//void main()
//{
//	Student sArr[3] = {Student(3,2.0), Student(3,3.0), Student(4,2.33)};
//	
//	sArr[0].addQuizScore(1);
//	sArr[0].addQuizScore(4);
//	sArr[0].addQuizScore(10);
//	
//	sArr[1].addQuizScore(10);
//	sArr[1].addQuizScore(4);
//	sArr[1].addQuizScore(9);
//
//	sArr[2].addQuizScore(9);
//	sArr[2].addQuizScore(8);
//	sArr[2].addQuizScore(7);
//
//	Student* dArr = new Student[4] { Student(3,2.0), Student(3,3.0), Student(4,2.33), Student(4,1.00)};
//
//	dArr[0].addQuizScore(1);
//	dArr[0].addQuizScore(4);
//	dArr[0].addQuizScore(10);
//	
//	dArr[1].addQuizScore(10);
//	dArr[1].addQuizScore(4);
//	dArr[1].addQuizScore(9);
//
//	dArr[2].addQuizScore(9);
//	dArr[2].addQuizScore(8);
//	dArr[2].addQuizScore(7);
//	
//	dArr[3].addQuizScore(2);
//	dArr[3].addQuizScore(3);
//
//	int size = 0;
//	Student* nSArr = returnThetas(sArr, 3, size);
//	cout << "Filtered Static Array" << endl;
//	printArray(nSArr, size);
//	cout << endl;
//	size = 0;
//	Student* nDArr = returnThetas(dArr, 4, size);
//	cout << "Filtered Dynamic Array" << endl << endl << endl;
//	printArray(nDArr, size);
//	cout << "Press any key to see sorted Data" << endl << endl;
//
//	delete[]nSArr;
//	delete[]nDArr;
//	system("pause");
//	system("CLS");
//
//	sort(sArr, 3);
//	sort(dArr, 4);
//	printArray(sArr, 3);
//	printArray(dArr, 4);
//}
