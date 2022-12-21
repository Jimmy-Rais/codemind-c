#include<stdio.h>
int main()
{
    int n,i;
    int prod=1;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        prod=n*i; 
       printf("%d x %d = %d
",n,i,prod);
    }
}