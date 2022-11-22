#include <iostream>
using namespace std;

template <typename T>

T Sum(T a, T b) {
	return a + b;
}


int main()
{
	cout << "sum: " << Sum(5, 6) << endl; 

	return 0;
}
