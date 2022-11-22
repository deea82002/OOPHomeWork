#include <iostream> 
#include <string>   
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int age;

    Person(string Iname, int Iage) {
        name = Iname;
        age = Iage;
    }
};


bool compAge(Person a, Person b) {
    if (a.age > b.age)
        return 1;
    else
        return 0;
}

int main()
{

    Person pers[3]{Person("Alina", 20), Person("Matei", 5), Person("Dan", 14)};

     sort(pers, pers + 3, &compAge);

    cout << "sorted:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << pers[i].name << " ";
        cout << pers[i].age <<endl;
    }
  
}

