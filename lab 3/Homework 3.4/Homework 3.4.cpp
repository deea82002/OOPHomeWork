#include <iostream>
#include <list>
#include <string>

using namespace std;

class Student {

public:
	string name;
	int grade;

	Student(string name, int grade) {
		this->grade = grade;
		this->name = name;
	}

};


int main()
{
	list<Student*> students;
	Student* student = new Student("Maria", 10);
	students.push_back(student);

	student = new Student("Adrian", 4);
	students.push_back(student);

	student = new Student("Ana", 7);
	students.push_back(student);

	student = new Student("Alin", 10);
	students.push_back(student);

	cout << "Unsorted list of students: " << '\n';
	for (Student* student : students)
	{
		cout << student->name << ": " << student->grade << endl;
	}
	cout << endl;
	students.sort([](Student* a, Student* b) -> bool { return a->grade < b->grade; });

	/*
	cout << "Sorted list of students ascending by grade: " << '\n';
	for (Student* student : students)
	{
		cout << student->name << ": " << student->grade << endl;
	}
	*/
	auto findHigh = [students]()-> list<Student*>
	{
		list<Student*> bestStud;
		int grade = 0;
		for (Student* student : students)
		{
			if (student->grade > grade)
			{
				bestStud.clear();
				bestStud.push_back(student);
				grade = student->grade;
			}
			else if (student->grade == grade) {
				bestStud.push_back(student);
			}
		}

		return bestStud;
	};

	list<Student*> foundHigh = findHigh();

	for (Student* student : foundHigh)
	{
		cout << "Student found: " << student->name << " with grade " << student->grade << endl;
	}


	return 0;
}