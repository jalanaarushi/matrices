#include<stdio.h>
int main()
{
  int a[3];
  for (int i=0;i<3;i++)
  {
     int n;
     scanf("%d",&n);
     a[i]=n;
}
for(int i=0;i<3;i++)
{
  printf("%d",a[i]);
}
return 0;
}
