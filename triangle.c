#include<stdio.h>

int main(){
    int n=0,a1,a2,a3, acute=0, right=0, obtuse=0, wrong=0;
    while (n<5){
        scanf("%d", &a1);
        scanf("%d", &a2);
        scanf("%d", &a3);
        if (a1+a2+a3 == 180){
            n++;
            if (a1 > 90 || a2 > 90 || a3> 90)
                obtuse++;
            else if (a1==90 || a2 == 90 || a3==90)
                right++;
            else if(a1< 90 || a2< 90 || a3<90)
                acute++;
        }
        else{
            printf("wrong entry try again:\n");
            wrong++;
        }
    }
    printf("Acute Angled Triangle: %d\n", acute);

    printf("Right Angled Triangle: %d\n", right);

    printf("Obtuse Angled Triangle: %d\n", obtuse);

    printf("Wrong Entries: %d\n", wrong);
    return 0;


}
