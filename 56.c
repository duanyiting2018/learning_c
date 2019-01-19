#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	for(a=0;a<6;a++)
    {
    for(b=0;b<5-a;b++)
    {
    printf(" ");
    }
    for(c=0;c<2*a+1;c++)
    {
    printf("*");
    }
    printf("\n");
    }
    
    for(a=6;a>=0;a--)
    {
    for(b=6;b>0+a;b--)
    {
    printf(" ");
    }
    for(c=6;c>2/a+1;c--)
    {
    printf("*");
    }
    printf("\n");
    }
	system("pause");
	return 0;
}
