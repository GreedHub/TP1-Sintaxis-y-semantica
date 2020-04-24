#include <stdio.h>

int sumar1(int,int);
void sumar2(int,int,int*);

int main()
{
    int a=3,b=5,s;
    printf("%d + %d = %d\n",a,b,sumar1(a,b));

    sumar2(a,b,&s);
    printf("%d + %d = %d\n",a,b,s);

    return 0;
}

int sumar1(int x,int y)
{
    return x+y;
}
void sumar2(int x,int y,int *z)
{
    *z=x+y;
}
