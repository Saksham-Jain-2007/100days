// Q22: Write a program to calculate the profit or loss percentage based on cost price and selling price.
 
 // PROGRAM:

#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price and selling price: ");
    scanf("%d,%d",&cp,&sp);
    if(sp>cp){
        printf("Profit percentage of %d\n",(sp-cp)*100/cp);
    }
    else if(cp>sp){
        printf("Loss percentage of %d\n",(cp-sp)*100/cp);
    }
    else{
        printf("No profit no loss\n");
    }
    return 0;
}
