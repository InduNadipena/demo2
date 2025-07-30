#include<stdio.h>
void countsort(int a[],int n,int pass)
{
    int count[10],b[n];
    int i;
    for(i=0;i<=9;i++)
       count[i]=0;
    for(i=0;i<n;i++)
    {
        count[(a[i]/pass)%10]++;
    }
    for(i=1;i<=9;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        b[count[(a[i]/pass)%10]-1]=a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        a[i]=b[i];
    }
    
    
}
void radixsort(int a[],int n,int max)
{
     int i,pass=1;
    for(pass=1;max/pass>0;pass*=10)
    {
        countsort(a,n,pass);
    }
}
void main()
{
   int n,i,j,max;
   printf("enter the size of the array:");
   scanf("%d",&n);
   int a[n];
   printf("enter the array elements");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   max=a[0];
    for(i=1;i<n;i++)
   {
       if(max<a[i])
           max=a[i];
   }
   radixsort(a,n,max);
   printf("sorted order of the array:");
   for(i=0;i<n;i++)
   {
       printf("%d---",a[i]);
   }
}
