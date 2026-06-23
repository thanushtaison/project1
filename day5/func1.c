#include<stdio.h>
void re(){
    printf("\nReverse option is Selected\nEnter the input:");
        int n,rev=0;
        scanf("%d",&n);
        while(n>0){
            int k=n%10;
            rev=rev*10+k;
            n=n/10;
        }
        printf("%d\n",rev);
}
void pal(){
    printf("\nPalindrome is Selected\nEnter the input:");
        int k,r=0;
        scanf("%d",&k);
        int m=k;
        while(k>0){
            int u=k%10;
            r=r*10+u;
            k=k/10;
        }
        
        if(r==m){
            printf("\nPalindrome\n");
        }
        else{
            printf("\nNot a Palindrome\n");
        }
}
int prime(){
    printf("\nPrime number is Selected\nEnter the input:");
             int q,f=0;
             scanf("%d",&q);
             if(q==1){
                printf("Invalid\n");
                return 0;
             }
             for(int i=2;i<q;i++){
                if(q%i==0){
                    f=1;
                    break;
                }
             }
             if(f==0){
                printf("It is prime number\n");
             }
             else{
                printf("It is not prime number\n");
             }   
             return 0;
}
void fac(){
    printf("\nFactorial is selected\nEnter the input:");
            int x,fact=1;
            scanf("%d",&x);
            for(int i=1;i<=x;i++){
                fact=fact*i;
            }
            printf("\n%d\n",fact);   
}
void fib(){
     printf("\nFibonacci is Selected\nEnter the input:");
            int z,a=0,b=1,c;
            scanf("%d",&z);
            printf("\n");
            for(int i=0;i<z;i++){
                printf("%d ",a);
                c=a+b;
                a=b;
                b=c;
            }
            printf("\n");
}
void Armstrong(){
     printf("\nArmstrong number is Selected\nEnter the input:");
            int t,v,l,count=0;
            scanf("%d",&t);
            v=t;
            l=t;
            while(t>0){
                 count++;
                 t=t/10;
            }
            int sum=0;
            while(v>0){
                int k=v%10;
                int p=1;
            for(int i=0;i<count;i++){
                p=p*k;
            }
            sum+=p;
            v=v/10;
        }
        if(sum==l){
            printf("Armstrong\n");
        }
        else{
            printf("Not Armstrong\n");
        }
}
int main(){
    int o;
    while(1){
    printf("\n<---Menu-driven Toolkit--->\n");
    printf("1.Reverse\n2.Palindrome\n3.Prime number\n4.Factorial\n5.Fibonacci\n6.Armstrong number\n7.Exit\n");
    printf("Select the option:");
    scanf("%d",&o);
    if(o==7){
        printf("____Exited____");
        return 0;
    }
    switch(o){
        case 1:
          re();
        break;
        case 2:
          pal();
        break;
        case 3:
          prime();
             break;
            case 4:
              fac();
            break;
            case 5:
              fib();
            break;

            case 6:
              Armstrong();
        break;

       default:
        printf("Invalid option\n");
    }
}
}