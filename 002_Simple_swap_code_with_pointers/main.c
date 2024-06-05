/**
 * Ezt a megoldást a magyarázat közben találtam ki. Úgy látszik működik is.
 *
 * Pointerek hasznosak lehetnek:
 *  - Elérni értékeket funkcióval
 *  - Visszaadni egynél több dolgot egy funcióval
 *  - Hozzáférés tömbökhöz és stringekhez
 *  - Futásidőben történő memória allokáció
 */

#include <stdio.h>

void swap(int *pNum1, int *pNum2)
{
    int temp;
    temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = temp;
}

int main()
{
    int a = 5, b = 7;
    printf("%d\n", a);
    printf("%d\n", b),

    swap(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}