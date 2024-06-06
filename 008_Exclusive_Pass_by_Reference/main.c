/**
 * Példa a Lecture 12-höz.
 * Bemutatja, hogyan kell egy fügvénnyel kettő változót referencia alapján hivatkozni.
 * Ez azért lehet hasznos, mert a C nyelv return paranccsal csak egy értéket tud visszaadni.
 * 2024-06-02
 * fktdvd
 */

#include <stdio.h>

void findMinMax(int num1, int num2, int *pMin, int *pMax)
{
    if (num1 > num2)
    {
        *pMin = num2;
        *pMax = num1;
    }
    else
    {
        *pMin = num1;
        *pMax = num2;
    }
}

int main()
{
    int a = 5, b = 7;
    int min, max;
    findMinMax(a, b, &min, &max);
    printf("Min between %d and %d = %d\n", a, b, min);
    printf("Max between %d and %d = %d\n", a, b, max);

    return 0;
}