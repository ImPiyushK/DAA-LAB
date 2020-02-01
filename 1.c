#include<stdio.h>

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

        freq = linear_search(ar, n, )

        t--;
    }
}
