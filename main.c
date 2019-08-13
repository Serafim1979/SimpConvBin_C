#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;
    unsigned int tNum = 1;
    printf("Enter an integer:\n");
    scanf("%d", &a);
    printf("You entered: %d\n", a);

    printf("In the binary representation of a number %d = ", a);
    for(i = 0; i < sizeof(int)*8; i++)
    {
        printf("%d",(a&tNum) ? 1 : 0);
        tNum = tNum<<1;
    }

    return 0;
}
