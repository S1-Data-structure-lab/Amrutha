#include<stdio.h>
int main()
{
int i,k,n,n1,n2,n3,a[10],b[10],c[20];
printf("enter the number of 1 array");
scanf("%d",&n1);
printf("enter the number of 2 array");
scanf("%d",&n2);
n3=n1+n2;
printf("enter  the elements of 1 array\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
k=n1;
printf("enter the element of 2 array\n");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
c[k]=b[i];
k++;
}
for(i=0;i<n3;i++)
{
printf("%d",c[i]);
}
}

