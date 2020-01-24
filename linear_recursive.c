#include<stdio.h>

int linear(int ar[], int n, int key){
	if(ar[n]==key)
		return 0;
	else{
		linear(ar, n-1, key);
	}
}

int main()
{
	int key, n, flag = 0, i;
	int ar[100];
	printf("Enter size of Array: ");
	scanf("%d",&n);
	
	printf("Enter Elements of Array-\n");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter key to find: ");
	scanf("%d",&key);
	
	flag = linear(ar, n, key);
	
	if(flag)
		printf("Key Found");
	else
		printf("Key Not Found");
}
