#include<stdio.h>
int main()
{
int a[10],n,i;
printf("enter the number of elemnet:");
scanf("%d",&n);
printf("enter the elemnets\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

