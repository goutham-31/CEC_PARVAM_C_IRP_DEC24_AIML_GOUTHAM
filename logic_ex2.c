// get number from user 
// if the greater than 100 multiple * 5
// if the greater than 500 division / 2
// if the number lesser than 100 Modules % 10 
// based on the result e.g 500 * 5 = 2500*2500 = 6250000

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>100 )
    result= num*5;
else if(num>500)
result=num/2;
else if(num <100)
result=num%10;
else
printf("invalid number");
result=result**2;
printf("%d", result);
return 0;

}