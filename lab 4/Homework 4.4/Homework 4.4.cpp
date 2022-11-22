#include <iostream>

using namespace std;

class Driver {
private: string name;

public:
	Driver() {}

	Driver(string nameI){
		setName(nameI);
	}

	string getName()
	{
		return name;
	}

	void setName(string nameI) {
		name = nameI;
	}
}

class Car {
private:
	Driver* driver;
public:
	Car(Driver* driverI)
	{
		driver = driverI;
	}
	Driver* getDriver() {
		return driver;
	}
	
	void setDriver(Driver* iDriver) {
		driver = iDriver;
	}

	void swapDriver(Car* car) {
		Driver* thisDriver = getDriver();
		setDriver(car->getDriver());
		car->setDriver(thisDriver);

		cout << "Swapped: " << getDriver()->getName() << ' ' << car->getDriver->getName() << endl;
		
	}
};

int main() {

}