#include <stdio.h>
void main()
{
    int i,j,c,n;
    printf("\nEnter number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=n-i;c++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("%d",j);
        printf("\n");
    }
}