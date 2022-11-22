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

int main()
{
	list<Student*> students;
	students.push_back(new Student("Tom", 5));
	students.push_back(new Student("Ionut", 10));
	students.push_back(new Student("Maria", 7));
	students.push_back(new Student("Maria", 8));
	students.push_back(new Student("Dan", 9));
	students.push_back(new Student("Mario", 3));
	
	
	auto findStud = [students](const string& name)-> Student*
	{
		for (Student* student : students)
		{
			if (student->name == name)
			{
				return student;
			}
		}
	
	};

	Student* foundStud = findStud("Ionut");
	
	if (foundStud)
	{
		cout << endl << "Found student:" << endl;
		cout << foundStud->name << ' ' << foundStud->grade << endl;
	}

}
