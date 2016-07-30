#include<stdio.h>
void sort(int *a,int n); 
void sort(int *a,int n)
{ int i,j,temp;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{ 
if(a[j]<a[j+1])
{
temp=a[j];
a[j]=a[j+1]; 
a[j+1]=temp;
} 
}
}
int main()
{
int m,n=50,a[n],i; 
for(i=0;i<n;i++)
{
scanf("%d",&n);
}
scanf("%d",&m);
sort(a,n); m=m-1;
printf("%d",a[m]);
return 0; 
}
