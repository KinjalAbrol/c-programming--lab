#include<stdio.h>

int main()
{
    int a[20],i,x,n;
//One-Dimensional Array Declaration and Variable Declaration
    printf("How many elements?:");
    scanf("%d",&n);
// To input elements of one dimensional array by the user
    printf("Enter array elements:");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
// Logic of Program
    printf("Enter element to search:");
    scanf("%d",&x);

    for(i=0;i<n;++i)
        if(a[i]==x)
            break;

    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found:");

    return 0;
}