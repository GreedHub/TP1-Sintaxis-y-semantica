#include <stdio.h>

void llenar1(int[]);
void llenar2(int*);

 int main(void)
{
    int vec[10];
    int vec2[]={2,4,6,8};
    llenar1(vec);
    //llenar2(vec);

    printf("%d %d\n",vec2,vec2+1);

    printf("vec[3] %d\n",vec[3]);
    printf("*(vec+3) %d\n",*(vec+3));

    return 0;
}

void llenar1(int v[])
{
    int i;
    for(i=0;i<10;i++)
        v[i]=i*10;
}

void llenar2(int *v)
{
    int i;
    for(i=0;i<10;i++)
        v[i]=i*10;
}
