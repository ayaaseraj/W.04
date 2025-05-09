#include <stdio.h>
int main() {
    int arr[5][5],rows[5]={0},clms[5]={0};
    printf("enter the array: \n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
            scanf("%d",&arr[i][j]);
    }
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            rows[i]+=arr[i][j];
            clms[i]+=arr[j][i];
        }
    }
    printf("sum of rows = ");
    for (int i=0;i<5;i++)
        printf("%d ",rows[i]);
    printf("\nsum of columns = ");
    for (int i=0;i<5;i++)
        printf("%d ",clms[i]);
return 0;
}
