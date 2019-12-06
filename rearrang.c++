#include <bits/stdc++.h> 
using namespace std; 
void rearrange(int arr[], int n) 
{ 
    int temp[n]; 
    int small=0, large=n-1; 
    int flag = true; 
    for (int i=0; i<n; i++) 
    { 
        if (flag) 
            temp[i] = arr[large--]; 
        else
            temp[i] = arr[small++]; 
  
        flag = !flag; 
    } 
    for (int i=0; i<n; i++) 
      cout<<temp[i]<<" "; 
      n=0;
} 
int main() 
{ 
  int *arr, n,tc;
  cin>>tc;
  for(int i=0;i<tc;i++)
  {
    cin>>n;
    arr = new int[n];
    for (int i=0; i<n; i++) 
        cin>>arr[i] ; 
    rearrange(arr, n); 
    cout<<"\n";
  }
    return 0; 
}
