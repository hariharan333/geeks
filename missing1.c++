#include <iostream>
using namespace std;
int arr[10],n,i,j,tc,x,b[10],y=0,flag;
void check(int a[],int x,int n)
{
    while(flag)
    {
      for(i=1;i<n;i++)
        {
            if(x==arr[i])
            {
                x++;
            }
            else
            {
                b[y]=x;
                y++;
                flag=0;
                break;
            }
        }
    }
}
void print()
{
    for(i=0;i<y;i++)
    {
        cout<<b[i]<<"\n";
    }
}
int main()
{
 cout<<"enter the test case:";
 cin>>tc;
 for(j=0;j<tc;j++)
 {
    cout<<"enter the size of array:";
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    x=1;
    flag=1;
    check(arr,x,n);
 }
 print();
  
    return 0;
}

