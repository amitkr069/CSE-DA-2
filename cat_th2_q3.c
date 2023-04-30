#include <stdio.h>
#include <string.h>

int arr(int x){
    int i,sum2;
    float sum1;
    if (x==0)
        return x;
    else{
        sum2 = 1;
        for (i=1;i<=x;i++){
            sum2 = sum2*i;
        }
        return sum2/x + arr(x - 1);
        
    }
}

int main() 
{
    int n;
    int sum;
    printf("enter num: ");
    scanf("%d", &n);
    sum = arr(n);
    printf("%d", sum);
    
   
}
