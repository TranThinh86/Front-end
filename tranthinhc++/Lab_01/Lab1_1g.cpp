
#include<iostream>
using namespace std;
double giai_thuat(int n){
    if(n==0)
    {
        return 0;
    }
    else{
        return (1.0/(n*(n+1))) + giai_thuat(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<giai_thuat(n);
}