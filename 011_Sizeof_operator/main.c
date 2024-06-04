/**
 * Példa a Lecture 18-19-20-21-hez.
 * 2024-06-03
 * fktdvd
 */

#include <stdio.h>

int main()
{
    int inum;
    printf("size of the int = %ld bytes\n", sizeof(inum));

    double dnum;
    printf("size of the double = %ld bytes\n", sizeof(dnum));

    int igrade = 80;
    printf("size of the variale 'int grade = 80' : %ld bytes\n", sizeof(igrade));

    double dgrade = 79.9;
    printf("size of the variale 'double grade = 79.9' : %ld bytes\n", sizeof(dgrade));

    int grade1 = 80, grade2 = 90;
    printf("size of the variale 'int grade1 = 80, grade2=90;' : %ld bytes\n", sizeof(grade1 + grade2));
    printf("size of the variale 'int grade1 = 80, grade2=90;' : %ld bytes\n", sizeof(grade1) + sizeof(grade2));

    printf("size of the 'double' : %ld bytes\n", sizeof(double));
    printf("size of the 'char' : %ld bytes\n", sizeof(char));
    printf("size of the 'int' : %ld bytes\n", sizeof(int));
    printf("size of the 'float' : %ld bytes\n", sizeof(float));
    //char a = 'a';
    printf("size of the %c : %ld bytes\n", 'a', sizeof('a'));           // 4 bytot ad vissza de ha előbb definiálom akkor 1 byte ahogy kellene
    printf("size of the %s : %ld bytes\n", "a",sizeof("a"));  

    int arr[3];
    printf("size of the 'arr[3]' : %ld bytes\n", sizeof(arr)); 

    double brr[5];
    printf("size of the 'brr[5]' : %ld bytes\n", sizeof(brr)); 

    int *ptr1 = &igrade;
    printf("size of the 'ptr1' : %ld bytes\n", sizeof(ptr1)); 

    double *ptr2 = &dgrade;
    printf("size of the 'ptr2' : %ld bytes\n", sizeof(ptr2)); 

    
}