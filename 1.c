#include<stdio.h>

int linear_search(int ar[], int n, int x)
{
    int i;
    int c = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(ar[i] == x)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int n, t;
    int freq, i, x;
    int ar[50];

    printf("Enter number of Test Cases: ");
    scanf("%d",&t);

    while(t!=0)
    {
        printf("Enter Number of elements: ");
        scanf("%d",&n);
        printf("Enter Elements: \n");
        for(i = 0 ; i < n ; i++)
        {
            scanf("%d",&ar[i]);
        }
        printf("Enter a number to be searched: ");
        scanf("%d",&x);

        freq = linear_search(ar, n, x);
        if(freq != 0)
            printf("%d",freq);
        else
            printf("Key Not Present");
        t--;
    }
}
