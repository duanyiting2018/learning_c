#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[3][5]={{1,2,3,4,5},{2,3,4,4},{3,5,5}},i,j;
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=4;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
	system("pause");
	return 0;
}
