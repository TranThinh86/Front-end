#include<iostream>
using namespace std;
long sum(int n)
{
    int k;
    if(n<3)
    {
        return 1;
    }
    else{
        k=(n-1)/2;
    long tong=(2*k+1)+sum(n-2);
    k--;
        return tong;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}