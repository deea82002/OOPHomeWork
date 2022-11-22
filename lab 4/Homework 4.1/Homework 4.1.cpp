#include <iostream>
#include <list>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class GroupOfFriends
{
private:
    list<Person*> friends;
public:
    string groupName;
    GroupOfFriends(string groupName)
    {
        this->groupName = groupName;
    }
    void addFriend(Person* person)
    {
        this->friends.push_back(person);
    }
   /*void removeFriend(Person* person)
    {
        for (Person* removedperson : this->friends)
        {
            if (removedperson->name == person->name)
            {
                this->friends.erase(person);  ////de cautat metoda care sterge 
            }
        }
    }
    */
    void displayFriends()
    {
        for (Person* person : this->friends)
        {
            cout << person->name << endl;
        }
    }
};

int main()
{
    Person* friend1 = new Person("Alexandra", 18);
    GroupOfFriends* schoolfriend = new GroupOfFriends("calculatoristii");
    schoolfriend->addFriend(friend1);

    Person* friend2 = new Person("Irina", 21);
    schoolfriend->addFriend(friend2);

    schoolfriend->displayFriends();

    //schoolfriend->removeFriend(friend1);
}

