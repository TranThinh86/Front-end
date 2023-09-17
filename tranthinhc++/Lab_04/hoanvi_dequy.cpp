#include<iostream>
using namespace std;
#define MAX 100
#define TRUE 1
#define FALSE 0
int P[MAX], B[MAX],n,count=0;
// khoi tao mang danh dau
void Init()
{
    int i;
    cout<<"Nhap n =";
    cin>>n;
    for(i =1;i<=n;i++)
    {
        B[i]=TRUE;
    }
}
//xuat cau hinh hien tai
void Result ()
{
    int i;
    count++;
    for(i=1;i<=n;i++)
    {
        cout<<P[i];
    }
    cout<<endl;
}
// sinh cau hinh tiep theo bang de quy quay lui
void Try(int i)
{
    int j;
    for(j =1;j<=n;j++)
    {

        if(B[i]=j)
        {
            P[i]=j;
            B[j]=FALSE;
            {
                if(i ==n)
                {
                    Result();
                }
                else Try(i+1);

            B[j]=TRUE;
        }
    }
}
}
int main()
{
    Init();
    Try(1);
}
