#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<1 || n>100){
        printf("Invalid input");
        return 0;
    }
    if(n>=90 && n<=100){
        printf("grade A");
    }
    else if(n>=80 && n<90){
        printf("grade B");
    }
    else if(n>=70 && n<80){
        printf("grade C");
    }
    else if(n>=60 && n<70){
        printf("grade D");
    }
    else if(n>=50 && n<60){
        printf("grade E");
    }
    else{
        printf("Fail");
    }

    return 0;
}