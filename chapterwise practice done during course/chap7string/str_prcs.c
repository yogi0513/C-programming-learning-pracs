#include<stdio.h>
#include<string.h>

int main(){
    char st1[34];
    char st2[34];
    char c;
    int i=0;
    printf("Enter the value of 1st string \n");
    scanf("%s", st1);
    printf("Enter the value of 2nd string char by char \n");
    while (c!='\n')
{   fflush(stdin);
        scanf("%c", &c);
       st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("the value of st1 is %s \n", st1);
    printf("the value of st1 is %s \n", st2);  
    printf("strcmp for these strings returns %d,",strcmp(st1,st2));
    return 0;
}   