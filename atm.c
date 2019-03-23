#include<stdio.h>
void withdraw();
void balanceenquiry();
int deposit();
void main()
{
    while(password=1234){
        printf("")
    }
    
    int atm;

    
    printf("menu \n");
    printf("1. withdraw\n");
    printf("2. deposit\n");
    printf("3. balance enquiry\n");
    scanf("%d",&atm);
    printf("%d",atm);   
    switch(atm)
    {
        case 1:
            withdraw();
            break;

        case 2:
            deposit();
            break;

        case 3:
            balanceenquiry();
            break;    
    }      
}

void withdraw()
{
    printf(" .withdraw");
}

void balanceenquiry ()
{   
    printf(" .balance enquiry");
}

int deposit()
{
    printf(" .deposit\n");
    int a;
    printf("enter the amount a\n");
    scanf("%d",&a);
    printf("total amount in acount is %d",a);
}
