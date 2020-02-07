#include<iostream>
using namespace std;

void bSort(int arr[], int n)
{
    int i, j, t;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter Number of Elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
