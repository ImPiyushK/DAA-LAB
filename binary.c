#include<stdio.h>

int main()
{
	int key, n, i, flag = 0;
	int ar[100];
	int min, max, mid;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	
	printf("Enter Elements of Array-\n");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter key to find: ");
	scanf("%d",&key);
	
	min = 0;
	max = n-1;
	mid = (min + max)/2;
	
	while(min<=max){
		if(ar[mid]==key){
			flag = 1;
			break;
		}
		else if(ar[mid]<key){
			min=mid+1;
		}
		else if(ar[mid]>key){
			max=mid-1;
		}
		mid = (min + max)/2;
	}
	if(flag)
		printf("Key Found");
	else
		printf("Key Not Found");
}
