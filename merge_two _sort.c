#include <stdio.h>
#include <stdlib.h>
int *arr1,*arr2,n1,n2,n3,arr3[100][1200],x=0,y,i,j,tc;
void merge(int arr1[],int arr2[],int n1,int n2)
{
    int i=0,j=0,y=0;;
    while(i<n1 &&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[x][y++]=arr1[i++];
        }
        else
        {
            arr3[x][y++]=arr2[j++];
        }
    }
    while(i<n1)
    {
        arr3[x][y++]=arr1[i++];
    }
    while(j<n2)
    {
        arr3[x][y++]=arr2[j++];
    }
        for(j=0;j<n3;j++)
        {
             printf("%d ",arr3[x][j]);
        }
        printf("\n");
     x++;
}
int main()
{
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
     scanf("%d%d",&n1,&n2);
    arr1=(int*)malloc(n1*sizeof(int));
    arr2=(int*)malloc(n2*sizeof(int));
    n3=n1+n2;
   arr3[100][n3];
    for(i=0;i<n1;i++)
    {
         scanf("%d",&arr1[i]);
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    merge(arr1,arr2,n1,n2);
	}
    return 0;
}

