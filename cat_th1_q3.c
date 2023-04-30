#include <stdio.h>

int main()
{
    int row, col,c=0;
    static int i=0,j=2;
    char pass[3][3];
    char pass1[10] = "aeiceg";
    char pass2[10];
    for (row=0;row<3;row++){
        for (col=0;col<3;col++){
            scanf(" %c", &pass[row][col]);
        }
    }
    for (row=0;row<3;row++){
        for (col=0;col<3;col++){
            printf("%c ", pass[row][col]);
        }
        printf("\n");
    }
    
    for (row=0;row<3;row++){
        pass2[i] = pass[row][row];
        i++;
    }
    for(row=0;row<3;row++){
        pass2[i] = pass[row][j];
        i++;
        j--;
    }
    for(row=0;row<6;row++){
        if (pass1[row] != pass2[row]){
            printf("wrong password");
            c=0;
            break;
            
        }
        else
            c = 1;
    }
    if (c==1)
        printf("correct password");
    return 0;
}
