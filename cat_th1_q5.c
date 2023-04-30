#include <stdio.h>
int fn(int a, int b){
    if (b==1)
        return a;
    else{
        return a*fn(a,(b- 1));
    }
}
int main()
{
   int num,power,a;
   scanf("%d", &num);
   scanf("%d", &power);
   a = fn(num, power);
   printf("%d", a);
   
}
