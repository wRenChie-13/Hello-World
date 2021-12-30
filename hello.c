#include<stdio.h>

int main()
{
    int i,arr[10],n;
    printf("enter the value \n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        arr[i]=(i+1)*n;
    }
    for(i=0;i<10;i++)
    {
        printf("%d x %d = %d \n",i+1,n,arr[i]);
    }
return 0;
}
