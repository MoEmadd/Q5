#include <stdio.h>
void func(int a[],int x,int n);
int main()
{
    int x,n;
    printf("Please enter the number of array element : ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0 ; i<x;i++)
    {
        printf("Arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the reference value : ");
    scanf("%d",&n);
    func(arr ,x ,n );
    return 0;
}
void func(int a[],int x,int n)
{
    for(int i=0 ; i<x ; i++ )
    {
        if(a[i]==n)
            printf("arr[%d] equal %d\n",i,n);
        else if(a[i]> n)
             printf("arr[%d] greater than %d\n",i,n);
        else
             printf("arr[%d] less than %d\n",i,n);
    }
}
