
#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       
   }
   int x;
   scanf("%d",&x);
   for(int i=0;i<n;i++)
   { int y=arr[i];
    for(int j=i+1;j<n;j++)
    {
       for(int k=j+1;j<n;j++)
       {   if(arr[i]+arr[j]+arr[k]==x)
           {
           printf("%d + %d + %d =%d",arr[i],arr[j],arr[k],x);
           }
       }
    }
}
    return 0;
}
