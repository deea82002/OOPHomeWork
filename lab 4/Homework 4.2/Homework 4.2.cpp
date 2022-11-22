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

	Student* studentMaxGrade() {
		list<Student*> copy = students;
		copy.sort([](Student* a, Student* b) -> bool { return a->grade > b->grade; });

		return copy.front();
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

	student = new Student("Alin", 8);
	students.push_back(student);
	
	StudentList* studentList = new StudentList(students);
	Student* studMaxGrade = studentList->studentMaxGrade();
	 
	cout << studMaxGrade->name << ' ' << studMaxGrade->grade << endl;

}
