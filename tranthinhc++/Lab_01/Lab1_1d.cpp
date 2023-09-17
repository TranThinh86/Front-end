#include<iostream>
using namespace std;
long daoso(int n)
{
    if(n<10)
        return n;
    else
    {
        cout<<n%10;
        daoso(n/10);
    }
}
int main()
{
    int n;
    do{
cout<<"\n nhap so: ";
    cin>>n;
    cout<<"so dao nguoc la: ";
    cout<<daoso(n);
 }while(n>0);
}