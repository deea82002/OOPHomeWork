#include <iostream>
using namespace std;

int f(int x) {
	return sizeof x;

}

int f(double x) {
	return sizeof x;
}

int f(char* x) {
	return strlen(x);
}

struct Student {
public:
	char* name;
};

int f(Student student) {
	return strlen(student.name);
}

int main()
{
	cout << f(75) << endl;

	cout << f(5.47) << endl;

	char name[] = "Mara";
	cout << f(name) << endl;

	Student* student;
	student = new Student;
	student->name = name;
	cout << f(*student) << endl;


}

