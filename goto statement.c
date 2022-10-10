#include <stdio.h>

int main()
{
    printf("A");
    goto school;
    printf("B");
    school:printf("C");
    return 0;
}
