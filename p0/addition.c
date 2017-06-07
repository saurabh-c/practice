#include<stdio.h>
int main()
{
int i,j,k=0,n;
printf("Enter the no. of numbers to add");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&j);
k=k+j;
}
printf("Sum of %d numbers is %d\n",n,k);
return 0;
}

