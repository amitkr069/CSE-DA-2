#include <stdio.h>
#include <string.h>
struct emp{
    char name[20];
    int age;
    char position[20];
    int date;
    int month;
    int year;
};

int main()
{
    int i,j,n;
    struct emp s[3], temp;
    printf("Enter the number of employees:");
    scanf("%d", &n);
    for (i = 0;i<n;i++){
        printf("Enter details of employee %d : \n", (i+ 1));
        scanf("%s", s[i].name);
        scanf("%d", &s[i].age);
        scanf("%s", s[i].position);
        scanf("%d", &s[i].date);
        scanf("%d", &s[i].month);
        scanf("%d", &s[i].year);
    }
    
    for(i=1;i<3;i++){
        for (j=0;j<(3- i);j++){
            if (strcmp(s[j].name, s[j+ 1].name)>0){
                temp = s[j];
                s[j]= s[j + 1];
                s[j+ 1]= temp;
            }
        }
    }
    printf("Employee List sorted by name:\n");
    for(i=0;i<3;i++){
        printf("%s\n", s[i].name);
        printf("%d\n", s[i].age);
        printf("%s\n", s[i].position);
        
        printf("%d/%d/%d\n",s[i].date,s[i].month,s[i].year);
    }
    
    for (i=1;i<3;i++){
        for (j=1;j<3;j++){
            if (s[j].year < s[j- 1].year){
                temp = s[j];
                s[j]= s[j - 1];
                s[j- 1]= temp;
            }
        }
    }
    printf("Employee list sorted by date of joining: \n");
    for(i=0;i<3;i++){
        printf("%s\n", s[i].name);
    }
}
