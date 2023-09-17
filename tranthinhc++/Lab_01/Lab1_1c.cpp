#include<iostream>
using namespace std;
void doi(int n)
{
    if(n==0)
        return;
    else{

     doi(n/2);
    cout<<n%2;

}
}
int main()
{
   int n;
   do{
   cin>>n;
  doi(n);
   }while(n>0);
}