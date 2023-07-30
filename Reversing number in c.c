#include<stdio.h>
#include<math.h>
int main()
{
   
    int a[3]={1,2,3};
    int i=0;
    int j=2;
    int temp;
    for(;i<=j;i++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    for(int i=0;i<3;i++)
    {
        printf("%d",a[i]);
        
    }
return 0;
}

