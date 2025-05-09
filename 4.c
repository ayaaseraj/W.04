#include <stdio.h>
void rep(int arr[],int n)
{
    int ar[n];
    int count=0;
for (int i=0;i<n;i++)
{   int flag=0;
    for (int j=0;j<n;j++)
    {
        if (arr[i]==arr[j] && i!=j){
            flag=1;
            break;}
    }
    if (flag) {
        int flag2=0;
        for (int k=0;k<count;k++) {
                if (ar[k] == arr[i]) {
                    flag2 = 1;
                    break;
                }
            }
    if (!flag2) {
        ar[count]=arr[i];
        count++;
    }
    }
}
for (int i=0;i<count;i++)
    printf("%d ",ar[i]);
}
int main(){
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements: ",n);
for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
rep(arr,n);
return 0;
}
