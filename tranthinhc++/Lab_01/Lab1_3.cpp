#include<iostream>
using namespace std;
long giai_thuat(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return giai_thuat(n-1) + giai_thuat(n-2);
    }
}
int main()
{
    int n;
    cout<<"nhap n: ";
    cin>>n;
    cout<<giai_thuat(n);
}