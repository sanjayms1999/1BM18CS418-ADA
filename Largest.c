#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n=0,i,max=0,arr[10];
	printf("ENTER THE NUMBER OF ELEMENS TO INSERT\n");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("maximum elelment is %d\n",max);
	return 0;

}
