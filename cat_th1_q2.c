#include <stdio.h>

int main()
{
    int i,n,sum=0,a;
    printf("enter: ");
    scanf("%d", &n);
    printf("\n");
    while (n>9){
        while (n!=0){
            a = n%10;
            n = n/10;
            sum = sum + a;
        }
        if (sum > 9){
            n = sum;
            sum = 0;
        }
        else
            i = sum;
    }
    printf("%d\n", i);
    if (i%2 == 0)
        printf("even found");
    else
        printf("odd found");
}
