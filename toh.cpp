#include<iostream>
using namespace std;

void toh(int n, char x, char y, char z)
{
    if (n == 1)
    {
        cout << "Move from rod " << x <<" to rod " << y<<endl;
        return;
    }
    toh(n - 1, x, z, y);
    cout << "Move from rod " << x <<" to rod " << y << endl;
    toh(n - 1, z, y, x);
}

int main()
{
    int n;
    cout<<"Enter Number of Disk: ";
    cin>>n;

    toh(n, 'A', 'C', 'B');
}
