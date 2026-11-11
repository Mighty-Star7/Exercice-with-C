#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Insert your age: ");
    scanf( "%d", &i);

    if (i < 12)
        printf("Child ticket (5 euros)\n");
    else if (i >= 12 && i <= 17)
        printf("Youth ticket (7 euros)\n");
    else if (i >= 18)
        printf("Adult ticket (10 euros)\n");

    system("pause");
    return 0;
}