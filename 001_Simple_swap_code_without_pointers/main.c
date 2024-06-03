/**
 * Ez a példa megmutatja, hogy a swap funkció nem fogja kicserélni az "a" ás "b" változókat, mert csak a funkción belül a lokális változók cserélődnek ki.
 * Nem mind1, hogy értékre vagy referenciára hivatkozunk.
 * 
 */

#include <stdio.h>

void swap(int num1, int num2)
{
    
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void main()
{
    int a = 5, b = 7;
    printf("%d\n",a);
    printf("%d\n",b),

    swap(a,b);

    printf("%d\n",a);
    printf("%d\n",b);
}

