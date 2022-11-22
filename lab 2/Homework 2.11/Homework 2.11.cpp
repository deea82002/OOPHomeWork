#include <iostream>
using namespace std;

int compute(int& nr1, int& nr2, char& semn)
{	
	if (semn == '+')
		return nr1 + nr2;
	else if (semn == '-')
		return nr1 - nr2;
	else return 0;
}


int main()
{
	
	char semnul;

	int a = 10, b = 5;
	cout << "semnul =";
	cin >> semnul;

	int(*p_compute)(int&, int&, char&);
	p_compute = &compute;

	if (p_compute(a,b,semnul) == 0)
		cout << "semn invalid";
	else
		cout << "The result of the operation  " << a << ' ' << semnul << ' ' << b << " is: " << p_compute(a, b, semnul) << '\n';

	cout << '\n';
}