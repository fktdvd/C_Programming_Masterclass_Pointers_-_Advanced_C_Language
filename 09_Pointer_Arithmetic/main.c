/**
 * Példa a Lecture 14-hez.
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

    return 0;
}
