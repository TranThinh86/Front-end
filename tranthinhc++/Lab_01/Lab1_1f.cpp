#include<iostream>
using namespace std;
double sum(int n)
{
    if(n==0)
        return 0;
    else{

        return n/(n+1.0)+sum(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    double s=sum(n);
    cout<<s;

}