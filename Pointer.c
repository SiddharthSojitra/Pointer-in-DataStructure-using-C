#include<stdio.h>
int i,j;
void swap (int*i,int*j);
void main()
{
    printf("Enter first value  : ");
    scanf("%d",&i);
    printf("Enter second value : ");
    scanf("%d",&j);
    printf("\nBefore swaping...\n\t\tFirst value is  %d \n\t\tSecond value is %d",i,j);
    swap(&i,&j);
    printf("\nAfter swaping...\n\t\tFirst value is  %d \n\t\tSecond value is %d",i,j);
}
void swap(int*i,int*j)
{
    int s;
    s=*i;
    *i=*j;
    *j=s;
}
