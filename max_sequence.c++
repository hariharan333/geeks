#include <stdio.h>
#include<limits.h> 
int *arr,n,i,j,tc,k=0,*b;
int check(int arr[],int n)
{
    int max=INT_MIN,count=0;
    for(int i=0;i<n;i++)
    {
        count=count+arr[i];
        if(max<count)
            max=count;
        if(count<0)
            count=0;
    }
	b=(int*)malloc(n*sizeof(int));
    b[k]=max;k++;
}
int print()
{
    for(i=0;i<k;i++)
    {
      printf("%d\n",b[i]);
    }
}
int main()
{
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
    scanf("%d",&n);
    arr = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
   check(arr,n);
    }
    print();
    return 0;
}

