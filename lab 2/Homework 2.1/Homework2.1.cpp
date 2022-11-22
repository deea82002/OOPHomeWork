#include <iostream>

using namespace std;

void interch1(int &a, int &b) { //parameters as reference
    int aux;
    aux = a;
    a = b;
    b = aux;
}

void interch2(int *a, int *b) { //parameters as address
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = "; 
    cin >> y;
    cout << '\n';

    cout << "interchange1: "<<'\n';
    interch1(x,y);
    cout << "x =" << x << " \n" << "y = " << y<<'\n';
    cout << '\n';

    int* p = new int;
    int* z = new int;
    
    cout << "p = ";
    cin >> *p;
    cout << "z = ";
    cin >> *z;
    cout << '\n';

    cout << "interchange2: "<< '\n';
    
    interch2(p, z);
    
    cout << "p =" << *p << " \n" << "z = " << *z;

}

