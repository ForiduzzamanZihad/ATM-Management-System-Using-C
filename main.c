#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>

int main()
{
    int pin=7890,option,Pin_entered,count=0,amount=1;
    float balance=1000;
    int continueTransaction = 1;

    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t     %s",ctime(&now));
    printf("\n\t\t\t     *=====================Welcome to ATM=====================*");

    while(pin!=Pin_entered){
        printf("\n Please Enter Your PIN : ");
        scanf("%d",&Pin_entered);
        if(Pin_entered != pin){
            Beep(750,800);
            printf("Invalid Pin!\nPlease enter the right Pin and try again!");
        }
        count++;
        if(count == 3 && pin!= Pin_entered)
        {
            //printf("Your card is blocked!\nPlease contact nearest branch.");
            exit(0);
        }

    }
    while(continueTransaction!=0){
            printf("\n\t\t\t*=================Select a transcation==============*");
            printf("\n\n\t\t1.Cash Withdraw");
            printf("\n\n\t\t2.Cash Deposit");
            printf("\n\n\t\t3.Balance Enquiry");
            printf("\n\n\t\tPlease select an option : ");
            scanf("%d",&option);
            
}
}

