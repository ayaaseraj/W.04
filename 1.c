#include <stdio.h>
int main(){
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
int ad;
printf("choose 0 for ascending, 1 for descending: ");
scanf("%d",&ad);
if (ad)
{
    for (int i=0;i<=n;i++)
    {
       for (int j=i;j<n;j++)
       {
           if (arr[j]<arr[j+1])
           {
               int t;
               t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
           }
       }
    }
}
else
{
   for (int i=0;i<=n;i++)
    {
       for (int j=i;j<n;j++)
       {
           if (arr[j]>arr[j+1])
           {
               int t;
               t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
           }
       }
    }
}
for (int i=0;i<n;i++)
    printf("%d ",arr[i]);
return 0;
}
