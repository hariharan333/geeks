#include <iostream>
using namespace std;
int arr[1000],i,j,n,sum=0,flag,k=0,a,ts,tc/*,b[1000]*/,x=0; 
void check(int a,int ts,int n)
{
        for(int i=a;i<=n;i++)
        {
            if(flag)
            {
                sum+=arr[i];
                if(sum>ts)
                {
                    a++;
                    sum=0;
                    check(a,ts,n);
                 }
                else if(sum == ts)
                {
                    /*b[x]=a;
                    x++;
                    b[x]=i;
                    x++;*/
		cout<<a<<" "<<i<<endl;
                    flag=0;
                    sum=0;
                    break; 
                    
                }
                
            }
        }
}
/*void print()
{
    for(i=0;i<x;i++)
    {
        if(i%2==0)
        cout<<"\n";
        cout<<b[i]<<" ";
    }
}*/
int main()
{
 cin>>tc;
 for(j=1;j<=tc;j++)
 {
    cin>>n;
    cin>>ts;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    a=1;flag=1;
    check(a,ts,n);
 }
 print();
    return 0;
}

