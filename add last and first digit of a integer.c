/*Wap in c to take input of an integer...then print sum of ist and last digit

Expected input
12
Output
3

Expected input
4567
Output
11
Expected input
5
Output
5
*/
#include <stdio.h>

int main() {
    int n,fd,ld,sum,t;
    printf("Enter a number to check");
    scanf("%d",&n);
    t=n;
    ld=n%10;
    n/=10;
    if(n==0){
        printf("\nSum= %d",ld);
    }
    else{
    while(t>=10){
        t=t/10;
    }
     fd=t;
     sum=ld+fd;
    printf("\nSum= %d",sum);
    }
    return 0;
}