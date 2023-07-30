#include<stdio.h>
#include<math.h>
int main()
{
   
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        int b;
        scanf("%d",&b);
        a[i]=b;
    }
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
return 0;
}
    