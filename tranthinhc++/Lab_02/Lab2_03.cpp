#include<bits/stdc++.h>
using namespace std;
void hopAB(int A[],int B[],int sizeA, int sizeB)
{
    int C[sizeA+sizeB],index=0;
    for(int i=0; i<sizeA; i++)
    {
        C[index]=A[i];
        index++;
    }
    for(int i=0; i<sizeB; i++)
    {
        C[index]=B[i];
        index++;
    }
    for(int i=0; i<index; i++)
    {
        cout<<C[i]<<" ";

    }
}
void giaoAB(int A[],int B[],int sizeA, int sizeB)
{
    int C[8], index=0,L[8],vt=0;
    for(int i=0; i<sizeA; i++)
    {
        for(int j=0; j<sizeB; j++)
        {
            if(A[i]==B[j])
            {
                C[index]=A[i];
                index++;
            }
        }
    }
    if(index==0)
    {
        cout<<"A va B khong giao nhau";
    }
    else
    {
        for (int i=0; i<index; i++)
        {
            int check=0;
            for(int j=0; j<index; j++)
            {
                if(C[i]==L[j])
                {
                    check++;
                }
            }
            if(check==0)
            {
                L[vt]=C[i];
                vt++;
            }
        }
    }
    for(int i=0; i<vt; i++)
    {
        cout<<L[i]<<" ";
    }

}
void hieuAB (int A[],int B[],int sizeA, int sizeB)
{
    for(int i=0; i<sizeA; i++)
    {
        int check =0;
        for(int j=0; j<sizeB; j++)
        {
            if(A[i]==B[j])
            {
                check++;
            }
        }
        if(check==0)
        {
            cout<<A[i]<<" ";
        }
    }
}
void tichAB(int A[],int B[],int sizeA, int sizeB )
{
    int LA[sizeA],LB[sizeB];
    int vta=0,vtb=0;
    for(int i=0; i<sizeA; i++)
    {
        int check =0;
        for(int j=0; j<sizeA; j++)
        {
            if(A[i]==LA[j])
            {
                check++;
            }
        }
        if(check==0)
        {
            LA[vta]=A[i];
            vta++;
        }
    }
    for(int i=0; i<sizeB; i++)
    {
        int check =0;
        for(int j=0; j<sizeB; j++)
        {
            if(B[i]==LB[j])
            {
                check++;
            }
        }
        if(check==0)
        {
            LB[vtb]=B[i];
            vtb++;
        }
    }
    for(int i=0;i<vta;i++)
    {
        for(int j=0;j<vtb;j++)
        {
            cout<<"("<<LA[i]<<","<<LB[j]<<") ";
        }
    }
}
int main()
{
    int A[4]= {3,4,5,8};
    int B[4]= {5,3,5,1};
    cout<<"- Hop cua A va B : ";
    hopAB(A,B,4,4);
    cout<<"\n- Giao cua A va B : ";
    giaoAB(A,B,4,4);
    cout<<"\n- Hieu cua A va B : ";
    hieuAB(A,B,4,4);
    cout<<"\n- Tich Descartes cua A va B : ";
    tichAB(A,B,4,4);
}