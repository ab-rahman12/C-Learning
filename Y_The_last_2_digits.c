#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
    unsigned long long int a,b,c,d;
    unsigned long long int mul, mod;
    scanf("%llu%llu%llu%llu",&a,&b,&c,&d);
    mod = (a*b*c*d)%100;
    //printf("%llu\n",mul);
    //mod = mul%100;
    if (mod == 0)
    {
        printf("00\n");
    }
    else
    {
        printf("%llu\n",mod);
    }
    
        return 0;
}