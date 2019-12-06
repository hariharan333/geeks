#include <iostream>

using namespace std;

int main()
{
    int *arr,i,n,*b,*c,k=0,flag;
    cout<<"enter the array size:";
    cin>>n;
    arr = new int[n];
    b = new int[n];
    c = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            b[i]=arr[i];
        }
        if(i!=0)
        {
            b[i]=arr[i];
            flag=1;
            for(int j=0;j<i;j++)
            {
                if(flag)
                {
                if(b[j]==arr[i])
                {
                    c[k]=arr[i];
                    k++;
                    flag=0;
                }
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<"\n";
    }
    return 0;
}


