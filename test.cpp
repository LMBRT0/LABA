#include <stdio.h>

int main(){
	printf("Goodbuy World!\n");

	return 0;
}


// g++ -E test.cpp -o test.i && g++ -S test.i -o test.s && g++ -c test.s -o test.o && g++ test.o -o test