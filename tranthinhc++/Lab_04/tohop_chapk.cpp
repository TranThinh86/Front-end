#include <bits/stdc++.h>
#include <iomanip>
#define max 10
using namespace std;
int n,k,a[max];
void xuat()
{
    for(int i=1;i<=k;i++)
    {
        cout<<setw(3)<<a[i];
    }
    cout<<endl;
}
void Try(int i)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k)
            xuat();
        else Try(i+1);
    }
}
int main(){
    cout<<"\nHay nhap n va k:";
    cin>>n>>k;
    Try(1);
    return 0;
}
