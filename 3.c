#include <stdio.h>
int main(){
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
int ar[10]={0,0,0,0,0,0,0,0,0,0};
int count=0;
for (int i=0;i<n;i++)
{
    int flag=1;
    for (int j=0;j<count;j++)
    {
        if (arr[i]==ar[j]){
            flag=0;
            break;}
    }
    if (flag) {
        ar[count]=arr[i];
        count++;
    }
}
for (int i=0;i<count;i++)
    printf("%d ",ar[i]);
return 0;
}
