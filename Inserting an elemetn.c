#include<stdio.h>
int main()
{
    int a[7]={1,2,3};
    int b,i;
    printf("enter the elemetn and position at which u have to insert");
    scanf("%d %d",&b,&i);
    for(int j=2;j>=i;j--)
    {
        a[j+1]=a[j];
    }
    a[i]=b;
    for(int j=0;j<4;j++)
    {
        printf("%d",a[j]);
    }
}