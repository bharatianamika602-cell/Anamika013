#include<stdio.h>
int main()
{
	int n,i,key,count=0;
	int a[100];
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
	
	scanf("%d",&a[i]);}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(a[i==key])
	count++;}
	printf("count=%d",count);
	return 0;
}
