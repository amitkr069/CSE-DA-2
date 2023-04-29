#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "rudresh";
    char str2[20];
    char chr;
    int freq[26]= {0};
    int i,j,l,f,s,c=0;
     int d=0;
    l = strlen(str1);
    printf("length of string: %d\n", l);
    // to find frequency of each character.
    for (i=0;str1[i]!= '\0';i++){
        freq[str1[i] - 'a'] += 1;
    }
    for (i=0; i<26;i++){
        if (freq[i] != 0){
            chr = 'a' + i;
            //printf("%c=%d\n", chr,freq[i]);
            c += 1; // to find count of non repeated characters
        }
    }
    printf("word frequency: %d\n", c);// to find count of non repeated characters
    
    // to find first repeated character and non repeated.
    
    
    for (i=0;i<l;i++){
        for (j=0;j<l;j++){
            if (i!=j && str1[j] == str1[i]){
                printf("first repeated chraacter : %c\n", str1[i]);
                s = 1;
                break;
                
            }
        }
        if (s==1)
        break;
    }
    if (s!=1){
        printf("no repeated characters found in the string\n");
    }
    
    for (i=0;i<l;i++){
        for (j=(i+ 1);j<l;j++){
            if (str1[j] == str1[i]){
                break;
            }
        }
        if (j == l){
            printf("first non repeated character in string: %c", str1[i]);
            break;
        }
    }
    
}
