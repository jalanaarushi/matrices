#include<stdio.h>
int main()
{   int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    // int b[n][m];
    int c[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
            //  scanf("%d",&b[i][j]);
         }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i>j)
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i<j)
            printf("%d",a[i][j]);
        }
    }
    return 0;
}