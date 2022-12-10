#include <stdio.h>
int main()
{
    int N,i;
    int a[i];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    scanf("%d",&a[i]);
    if(a[0]<a[i])
    {
    a[0]=a[i];
    }
    }
    printf("%d",a[0]);
}