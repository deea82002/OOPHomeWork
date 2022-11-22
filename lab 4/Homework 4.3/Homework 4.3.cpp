#include <iostream>
#include <string>
#include <list>
using namespace std;

class Student
{
public:
	string name;
	int grade;

	Student(string name1, int grade1)
	{
		this->name = name1;
		this->grade = grade1;
	}
};

class StudentList
{
private:
	list<Student*> students;

public:
	StudentList(list<Student*> studentsI)
	{
		students = studentsI;
	}

	Student* studentG5() {
		for (Student* student : students) {
			if (student->grade == 5)
				return student;
		}
		return nullptr;
	};
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

	student = new Student("Alin", 5);
	students.push_back(student);

	StudentList* studentList = new StudentList(students);
	Student* studG5 = studentList->studentG5();

	cout << studG5->name << ' ' << studG5->grade << endl;

}