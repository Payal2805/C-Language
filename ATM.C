#include<stdio.h>
#include<conio.h>
long amount=10000,deposit,withdraw;
int choice, pin, k;
char transaction='y';

void main()
{
clrscr();
while(pin != 1111)
{
printf("\n\tEnter Your Secret PIN Number :  ");
scanf("%d",&pin);
if(pin != 1111)
printf("\n\tPlease Enter Valid Password :   ");
}

do
{
printf("~~~~~~~~~~~~~~~~\tWelcome To ATM Service\t~~~~~~~~~~~~~~~~");
printf("\n\t 1. Check Balance..");
printf("\n\t 2. Withdraw Cash..");
printf("\n\t 3. Deposit Cash..");
printf("\n\t 4. Quit..");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n\tEnter Your Choice : ");
scanf("%d",&choice);

switch(choice)
{
  case 1:
       printf("\n\tYour Balance In Account :  %lu",amount);
       break;

  case 2:
       printf("\n\tEnter The Amount To Withdraw :  ");
       scanf("%lu",&withdraw);
       if(withdraw % 100 != 0)
       {
       printf("\n\tPlease Enter The Amount In MultiPles Of 100..");
       }
       else if(withdraw >(amount -500))
       {
       printf("\n\t\tINSUFFICENT BALANCE ...");
       }
       else
       {
       amount = amount - withdraw;
       printf("\n\n\t\tPlease Collect Cash ...");
       printf("\n\tYour Current Balance :  %lu",amount);
       }
       break;

  case 3:
       printf("\n\tEnter The Amount Of Deposit : ");
       scanf("%lu",&deposit);
       amount=amount+deposit;
       printf("\n\tYour Balance : %lu",amount);
       break;

  case 4:
       printf("\n\tThank U Using ATM ....");
       break;

  default:
       printf("\n\t\tINVALID CHOICE ....");
}

printf("\n\n\n\tDo U Wish To Have Another Transcation? (Y/N) : ");
fflush(stdin);
scanf("%c",&transaction);
if(transaction =='n' || transaction == 'N')
   k=1;
} while(!k);
printf("\n\n\tThanks For Using Out ATM Servici ...!!");
getch();
}

