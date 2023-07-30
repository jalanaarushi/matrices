#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n][n];
    // int b[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
            //  scanf("%d",&b[i][j]);
         }
    }
    // int b=[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(j>i)
          {
              int temp=a[i][j];
              a[i][j]=a[j][i];
              a[j][i]=temp;
              
          }
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
		printf("\n");
    }
    return 0;
}