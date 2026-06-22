#include<stdio.h>
int main(){
    int o;
    printf("Menu-driven Toolkit\n");
    printf("1.Reverse\n2.Palindrome\n3.Prime number\n4.Factorial\n5.Fibonacci\n6.Armstrong number\n");
    printf("Select the option:");
    scanf("%d",&o);
    switch(o){
        case 1:
        printf("\nReverse option is Selected\nEnter the input:");
        int n,rev=0;
        scanf("%d",&n);
        while(n>0){
            int k=n%10;
            rev=rev*10+k;
            n=n/10;
        }
        printf("\n%d",rev);
        break;
        case 2:
        printf("\nPalindrome is Selected\nEnter the input:");
        int k,r=0;
        scanf("%d",&k);
        int m=k;
        while(k>0){
            int u=n%10;
            r=r*10+u;
            k=k/10;
        }
        
        if(r==m){
            printf("\nPalindrome");
        }
        else{
            printf("\nNot a Palindrome");
        }
        break;
        case 3:
        printf("\nPrime number is Selected\nEnter the input:");
             int q,f=0;
             scanf("%d",&q);
             if(q==1){
                printf("Invalid");
                return 0;
             }
             for(int i=2;i<q;i++){
                if(q%i==0){
                    f=1;
                    break;
                }
             }
             if(f==0){
                printf("It is prime number");
             }
             else{
                printf("It is not prime number");
             }
             break;
            case 4:
            printf("\nFactorial is selected\nEnter the input:");
            int x,fact=1;
            scanf("%d",&x);
            for(int i=1;i<=x;i++){
                fact=fact*i;
            }
            printf("\n%d",fact);
            break;
            case 5:
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
            break;

            case 6:
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
            printf("Armstrong");
        }
        else{
            printf("Not Armstrong");
        }
        break;

       default:
        printf("Invalid option");
    }
}