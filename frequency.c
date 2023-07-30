#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    int k;
    scanf("%d",&k);
    int c=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]==k)
       {
           c++;
       }
    }
    printf("%d",c);
    return 0;
    
}
    
