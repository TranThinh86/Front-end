#include<iostream>
using namespace std;
int TongUocSo(int n,int i)
{
    if (i==n) return 0;
    else if (n%i==0)
        {
            return i+TongUocSo(n,i+1);
        }
        else
        {
            return TongUocSo(n,i+1);
        }
}
int main()
{
    int n;
    cin>>n;
    cout<<"tong uoc la: "<<TongUocSo(n,1);
}