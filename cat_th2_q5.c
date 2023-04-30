#include <stdio.h>
#include <string.h>
#include <ctype.h>
void fn(char x[50]){
    int i,l,s;
    l = strlen(x);
    x[0] = toupper(x[0]);
    for (i=(l- 1); i>=0;i--){
        x[i] = toupper(x[i]);
        if (x[i] == ' ')
            break;
    }
    printf("%s\n", x);
    printf("%d", l);
}
int main()
{
    char comp[50];
    scanf("%[^\n]s", comp);
    fn(comp);
}
