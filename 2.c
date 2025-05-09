#include <stdio.h>
int main(){
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n+1];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
int max=arr[0],c=0;
for (int i=0;i<n;i++)
{
    if (arr[i]>max)
        max=arr[i];
}
arr[n]=max;
int max2=arr[0];
for (int i=0;i<n;i++)
{
    if (arr[i]>max2 && arr[i]<arr[n])
        max2=arr[i];
}
printf("%d",max2);
return 0;
}
