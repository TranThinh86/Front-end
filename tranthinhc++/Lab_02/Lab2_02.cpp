#include<bits/stdc++.h>;
using namespace std;
int card(int A[],int n)
{
    int card =0;
    int B[n];
    for(int i =0; i<n; i++)
    {
        B[i]=1;
    }
    for(int i=0; i<n; i++)
    {
        if(B[i]==1)
        {
            for(int j=i+1; j<n; j++)
            {
                if(A[i]==A[j])
                {
                    B[j]=0;
                }
                else
                {
                    B[i]=0;
                }
            }
            card++;
        }
    }
    return card;
}
int main()
{


    int A[8] = {6,3,7,1,4,3,5,7};
    int B[9] = {5,3,1,7,1,4,6,9,9};
    if(card(A, sizeof(A)/sizeof(int)) != card(B, sizeof(B)/sizeof(int)))
    {
        cout << "Hai tap hop khong bang nhau!";
        exit(0);
    }
    else
    {
        int z=0, X[sizeof(A)/sizeof(int)];
        for(int i=0; i<sizeof(A)/sizeof(int); i++)
        {
            int scan=0;
            for(int j=0; j<sizeof(A)/sizeof(int); j++)
            {
                if(A[i]==X[j])
                {
                    scan++;
                }
            }
            if(scan==0)
            {
                X[z]=A[i];
                z++;
            }
        }
        int check1 =0,check2=0;
        for(int i=0; i<sizeof(A)/sizeof(int); i++)
        {
            for(int j=0; j<z; j++)
            {
                if(A[i]==X[j])
                {
                    check1++;
                }
            }
        }
        for(int i=0; i<sizeof(B)/sizeof(int); i++)
        {
            for(int j=0; j<z; j++)
            {
                if(B[i]==X[j])
                {
                    check2++;
                }
            }
        }
        if(check1==sizeof(A)/sizeof(int)&&check2==sizeof(B)/sizeof(int))
        {
            cout<<"Hai tap hop bang nhau ";
        }
        else
            cout<<"Hai tap hop k bang nhau ";

    }

}