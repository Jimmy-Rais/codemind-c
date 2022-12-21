#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    float p,s;
    p=2*3.14*a;
    s=3.14*a*a;
    printf("%.2f
%.2f",s,p);
}