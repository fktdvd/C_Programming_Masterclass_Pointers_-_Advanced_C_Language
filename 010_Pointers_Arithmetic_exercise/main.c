/**
 * Példa a Lecture 17-hez.
 * 2024-06-03
 * fktdvd
 */

#include <stdio.h>

int main()
{

    int num = 30;
    int *ptr;
    printf("%d\n", num);
    ptr = &num;
    printf("%p\n", &num);
    printf("%p\n", ptr);
    *ptr = 20;
    printf("%d\n", num);
    
}