#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[6]= {7,4,7,6,3,4};
    int B[6]= {1,1,1,1,1,1};
    int card =0;
    for(int i=0; i<6; i++)
    {
        if(B[i]==1)
        {
            for(int j=i+1; j<6; j++)
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
    cout<<card;

}