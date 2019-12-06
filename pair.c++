#include <iostream>
#include <math.h>
using namespace std;
 int *arr1,*arr2,tc,n1,n2;
int check(int *arr1,int *arr2,int n1,int n2)
{
    int count=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
          if(pow(arr1[i],arr2[j])>pow(arr2[j],arr1[i]))
           {
             count++;
           }
        }
    }
    cout<<count;
}
int main()
{
    cout<<"enter the no.of testcase:";
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cout<<"enter the sizeof array1 and array2:";
        cin>>n1>>n2;
        arr1= new int[n1];  
        arr2= new int[n2];
        for(int i=0;i<n1;i++)
        {
            cin>>arr1[i];
        }
         for(int i=0;i<n2;i++)
        {
            cin>>arr2[i];
        }
       check(arr1,arr2,n1,n2);
        n1=0;n2=0;
    }

    return 0;
}

