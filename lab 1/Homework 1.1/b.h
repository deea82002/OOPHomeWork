#include <iostream>
#include "a.h"

void f() {
	int i;
	for (i = 1; i <= 3; i++) {
		test(); //useing function from a.h
	}
}