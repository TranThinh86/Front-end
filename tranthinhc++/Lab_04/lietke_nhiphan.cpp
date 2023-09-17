#include<bits/stdc++.h>
using namespace std;
int n,x[20];
//xuat ra cau hinh hien tai
void Xuat()
{
    for(int i=1;i<=n;i++)
    {
        cout<<x[i];
    }
    cout<<endl;
}
//de qui quay lui
void Thu(int i)//tim phan tu x[i]044
{
    for(int j=0;j<=1;j++)
    {
        x[i]=j;// xac dinh phan tu x[i] theo j
        if(i==n)
            Xuat();// xuat ra cau hinh hien tai
        else
            Thu(i+1);//quay lui : tim phan tu x[i+1]; //
    }
}
int main()
{
    cout<<"Nhap n = ";
    cin>>n; //
    Thu(1);

}
