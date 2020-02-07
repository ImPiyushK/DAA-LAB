#include<iostream>
using namespace std;

void sSort(int arr[], int n)
{
    int i, j, t;
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
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
    sSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}

