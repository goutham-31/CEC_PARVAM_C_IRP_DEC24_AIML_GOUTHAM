// get the name from user 



#include<stdio.h>
int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s", &name);

    for(int i=0; name[i]!='\0';i++)
        count++;
    if(count%2==0)
    printf("your name has even characters");
    else
    printf("your name has odd characters");
    

}      