#include<iostream>
using namespace std;
int USCLN(int a , int b)
{
    if(b==0)
    {
        return a;
    }
    return USCLN(b , a%b);
}
int BSCNN( int a , int b)
{
    if(b==0)
    {
        return a;
    }
    return(a*b)/USCLN(a , b);
}
int main()
{
    int a,b;
    cout<<"nhap a  va b :"<<endl;
    cin>>a>>b;
    cout<<"USCLN("<<a<<","<<b<<"):="<<USCLN(a,b);
    cout<<endl;
    cout<<"BSCNN("<<a<<","<<b<<"):="<<BSCNN(a,b);


}