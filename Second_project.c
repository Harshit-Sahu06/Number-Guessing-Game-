//write a program to check wheather a number is prime or not.
//Good Question.
#include<stdio.h>
int main () {
    int n, count=0;
    printf("enter number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(n%i==0) {
            count++;
        }
    }
    if(count==2){
        printf("It is a prime number.");
    } else {
        printf("It is not a prime number.");
    }
return 0;
}