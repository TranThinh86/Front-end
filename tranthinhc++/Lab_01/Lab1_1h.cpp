#include<iostream>
using namespace std;
int giai_thuat(int n , int max)
{
    if(n==0)
    {
        return max;
    }
    int t = n%10;
        if(t>max)
        {
            max=t;
        }
       return giai_thuat(n/10 , max);
    }

int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    int max=0;
    cout<<"chu so lon nhat la: " <<giai_thuat(n ,max);

}