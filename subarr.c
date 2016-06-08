#include<stdio.h>

#define RANGE 100

int hash[RANGE];

int check(int arr1[],int arr2[],int m,int n)
{
    int i;
    for(i=0;i<m;i++)
      hash[arr1[i]]++;

    for(i=0;i<n;i++)
     {
         if(hash[arr2[i]]>0)
           hash[arr2[i]]--;
         else
           return 0;
     }
     return 1;
}

int main()
{
    int arr1[]={1, 4, 2, 7, 9, 5};
    int arr2[]={1, 4, 7, 7};

    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);

    if(check(arr1,arr2,m,n))
      printf("Subset\n");
    else
      printf("Not a Subset\n");

    return 0;
}
