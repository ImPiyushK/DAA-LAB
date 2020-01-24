#include<stdio.h>

int main()
{
	int key, n, flag = 1, i;
	int ar[100];
	printf("Enter size of Array: ");
	scanf("%d",&n);
	
	printf("Enter Elements of Array-\n");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("Enter key to find: ");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(ar[i]==key){
			flag=0;
			break;
		}
	} 
	if(flag==0)
		printf("Key found");
	else
		printf("Key Not Found");
}
