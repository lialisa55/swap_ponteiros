#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, *p1, *p2, *p3;

    scanf("%d %d", &a, &b);

    p1 = &a;

    p2 = &b;

    p3 = &c;

    c = *p2;

    b = *p1;

    a = *p3;

    printf("%d %d", a, b);

    return 0;
}
