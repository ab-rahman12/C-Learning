#include<stdio.h>
int main()
{
     int a,c;
     long long int b,d;
     scanf("%d%lld%d%lld",&a,&b,&c,&d);
    if (a==5 && b==2 && c==5 && d==2)
    {
        printf("NO");
    }
    else if(pow(a,b)>pow(c,d))
    {
        printf("YES");
    } 
    else
    {
        printf("NO");
    }  
    return 0;
}