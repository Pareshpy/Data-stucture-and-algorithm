#include <stdio.h>
#include <windows.h>
int main()
{
	int n,i,value,low=0,high,mid;
	printf("Enter the number of element that you want to enter\t:");
	scanf("%d",&n);
	int arr[n];
	system("cls");
	printf("Enter the element in shorted manner\n");
	printf("Ex - 1,2,3,4,5,6\n\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter an element of arr[%d]\t:",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	
	printf("Enter the value which u want to find\t:");
	scanf("%d",&value);
	high=n-1;
	mid=(low+high)/2;
	
	while(low<=high)
	{
		if(arr[mid]==value)
		{
			printf("\n\n%d found in the address of arr[%d]",value,mid);
			break ;
		}
		else if(arr[mid]<value)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
		mid=(low+high)/2;
	}
	if (low>high)
	{
		printf("\n\n%d is not found in the array that you enterd",value);
	}
	return 0;
}
