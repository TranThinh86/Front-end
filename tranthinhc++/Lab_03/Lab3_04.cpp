#include<iostream>
#include<math.h>
using namespace std;

//Xuat ra cau hinh
void in(int n,int a[])
{
    for(int i=0; i<n; i++)
        cout<<a[i];
    cout<<endl;
}
//Dat cac phan tu, tu j den n bang 0
void gen(int i,int n,int a[])
{
    for(int j=i; j<n; j++)
        a[j]=0;
}
//Ham kiem tra dung
int kiemtra(int a[],int n)
{
    for(int i=0; i<n-1; i++)
        if(a[i]==0&&a[i+1]==0) return 0;
    return 1;
}
void bai4(int & n,int a[])
{
    cout<<"Nhap n: ";
    cin>>n;
//B1: Xac dinh cau hinh dau tien
    for(int i=0; i<n; i++) a[i]=0;
    in(n,a);
//B2: Sinh cau hinh tiep theo
    while(true)
    {
        if(kiemtra(a,n)==1) in(n,a);
        int i = n - 1;
        while (i > -1 && a[i] == 1)
            i = i - 1;
        a[i] = 1;
        gen(i+1,n,a);
        if (i ==-1)
            break;
    }
}
int main()
{
    int a[100],n;
    bai4(n,a);
}

