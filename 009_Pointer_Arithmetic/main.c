/**
 * Példa a Lecture 14,15-hez.
 * 2024-06-02
 * fktdvd
 */

#include <stdio.h>

int main()
{
    int *ptr;
    int grades[3] = {80, 90, 100};

    printf("grades starts at: %p\n", grades);
    printf("grades 2nd at: %p\n", grades + 1);
    printf("grades : %d\n", *grades);
    printf("address : %p\n", &grades[0]);
    printf("address : %p\n", &grades[1]);
    printf("address : %p\n", &grades[2]);


    double dgrades[3] = {80.5, 90.3, 99.9};

    printf("\ngrades starts at: %p\n", dgrades);
    printf("grades 2nd at: %p\n", dgrades + 1);
    printf("grades 2nd at: %p\n", dgrades - 2);
    printf("grades : %f\n", *dgrades);
    printf("address : %p\n", &dgrades[0]);
    printf("address : %p\n", &dgrades[1]);
    printf("address : %p\n", &dgrades[2]);

    return 0;
}
