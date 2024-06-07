/**
 * Példa az Assignment 1-hez
 * 2024-06-05
 * fktdvd
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swapInts(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapIntsNoThird1(int* a, int* b) {
	*a = *a + *b;       // pl: a(30) = 10 + 20
	*b = *a - *b;       // pl: b(10) = 30 - 20
	*a = *a - *b;       // pl: a(20) = 30 - 10
}

void swapIntsNoThird2(int* a, int* b) {
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
}

void genericSwap(void* a, void* b, int size)
{
	void* tempMemory = malloc(size);
	memcpy(tempMemory, a, size);
	memcpy(a, b, size);
	memcpy(b, tempMemory, size);
}

int main() {
    int a = 10;
    int b = 20;
    printf("Initial values: a = %d, b = %d\n", a, b);

    swapInts(&a, &b);
    printf("After swapInts: a = %d, b = %d\n", a, b);

    // swap back the values
    swapInts(&a, &b);

    swapIntsNoThird1(&a, &b);
    printf("After swapIntsNoThird1: a = %d, b = %d\n", a, b);

    // swap back the values
    swapIntsNoThird1(&a, &b);

    swapIntsNoThird2(&a, &b);
    printf("After swapIntsNoThird2: a = %d, b = %d\n", a, b);

    // swap back the values
    swapIntsNoThird2(&a, &b);

    float x = 1.23;
    float y = 4.56;
    printf("Initial values: x = %.2f, y = %.2f\n", x, y);
    
    genericSwap(&x, &y, sizeof(float));
    printf("After genericSwap: x = %.2f, y = %.2f\n", x, y);

    return 0;
}

