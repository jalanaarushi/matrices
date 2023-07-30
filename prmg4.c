#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int copy=N, c=0;
    while(copy>0)
    {
        copy/=10;
        c++;
    }
    int copy1=N;
    int sum=0;
    while(copy1>0)
    {
        int d=copy1%10;
        sum=sum+(d*pow(10,c));
        c--;
        copy1/=10;
    }
    printf("%d",sum);

}
