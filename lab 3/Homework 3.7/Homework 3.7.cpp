#include <iostream>
#include <list>
#include <string>

using namespace std;

class Student {
private: 
	int grade;

public:
	string name;
	static int noOfInstances;
	Student(string name, int grade) {
		
		this->name = name;
		this->grade = grade;
		this->noOfInstances++;
	}
	~Student() {
		this->noOfInstances--;
	}
	int getNoOfInstances() {
		return noOfInstances;
	}
	
};

int Student::noOfInstances = 0;

int main()
{
	list<Student*> students;
	Student* student = new Student("Andrei", 9);
	students.push_back(student);

	student = new Student("Maria", 6);
	students.push_back(student);

	student = new Student("Ana", 8);
	students.push_back(student);

	student = new Student("Ionut", 10);
	students.push_back(student);

	cout << "Number of instances is " <<student->getNoOfInstances() << endl;

	return 0;
}