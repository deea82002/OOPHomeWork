#include <iostream>
#include <string>
#include <list>

using namespace std;

class Student {
public:
	string name;
	int grade;

	Student(string nameI, int gradeI) {
		name = nameI;
		grade = gradeI;
	}

};


int main() {

	list<Student*> students;
	students.push_back(new Student("Tom", 5));
	students.push_back(new Student("Ionut", 10));
	students.push_back(new Student("Maria", 7));
	students.push_back(new Student("Maria", 8));
	students.push_back(new Student("Dan", 9));
	students.push_back(new Student("Mario", 3));
	
	cout<<"Unsorted list of students : " << '\n';
	for (Student* student : students)
	{
		cout<<student->name <<": " << student->grade << endl;
	}
	cout << '\n';
	students.sort([]( Student* a, Student* b) -> bool { return a->grade < b->grade; });

	cout << "Sorted list of students ascending by grade : " << '\n';
	for (Student* student : students)
	{
		cout << student->name << ": " << student->grade << endl;
	}
	

	students.sort([](Student* a, Student* b) -> bool { return a->grade > b->grade; });

	cout<< '\n' << "Sorted list of students descending by grade : " << '\n';
	for (Student* student : students)
	{
		cout << student->name << ": " << student->grade << endl;
	}


	return 0;
}
