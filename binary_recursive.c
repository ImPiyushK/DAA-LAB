#include<stdio.h>

int binary(int *ar, int n, int key,int min, int max, int mid){

	if(min<=max){
		if(ar[mid]==key)
			return 1;
		else if(ar[mid]<key)
			binary(ar, n, key, mid+1, mid, max);
		else
			binary(ar, n, key, min, mid, mid-1);
	}
	return 0;
}

int main()
{
	int key, n, flag = 0, i;
	int ar[100];
	int min; int max; int mid;
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
	flag = binary(ar, n, key, min, mid, max);
	
	if(flag)
		printf("Key Found");
	else
		printf("Key Not Found");
}
