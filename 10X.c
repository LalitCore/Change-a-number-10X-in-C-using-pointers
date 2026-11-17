#include <stdio.h>
int change(int *);
int change(int *a){
    *a = *a * 10;
}
int main()
{
    int a;
    printf("enter a = ");
    scanf("%d",&a);
    change(&a);
    printf("ten time = %d",a);
    return 0;
}