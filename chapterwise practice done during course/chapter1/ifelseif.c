#include<stdio.h>

int main(){ 
    int num;

    printf("enter a number \n");
    scanf("%d", num);
    if(num==1){
        printf("your number is 1 \n");
    }
    else if (num==2)
    {
        printf("your number is 2 \n");
    }
    else if (num==3)
    {
        printf("your number is 3 \n");
    }
    else{
        printf("your number is not given number \n");
    }
    
    return 0;

}
