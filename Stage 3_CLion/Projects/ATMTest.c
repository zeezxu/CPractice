//
// Created by Ziyan Xu on 9/28/24.
//
#include <stdio.h>

int main() {

    double balance = 0.0;
    int selection;//用于记录变量地址
    int isFlag = 1;
    double addMoney, minusMoney;

    do {
        printf("===========ATM Machine===========\n");
        printf("           1.Deposit\n");
        printf("           2.Withdraw\n");
        printf("           3.Balance\n");
        printf("           4.Quit\n");
        printf("           Please choose(1-4):");

        scanf("%d",&selection);

        switch(selection) {
            case 1:
                printf("\nPlease deposit:");
                scanf("%lf", &addMoney);
                if(addMoney > 0) {
                    balance += addMoney;
                    printf("Deposit succeed.\n");
                }else {
                    printf("Invalid number. Please try again.\n");
                }

                break; //只结束SwitchCase结构
            case 2:
                printf("Please withdraw:\n");
                scanf("%lf", &minusMoney);
                if(minusMoney > 0 && balance >= minusMoney) {
                    balance -= minusMoney;
                    printf("Withdraw succeed.\n");
                }else {
                    printf("Invalid number or there is not enough balance. Please try again.\n");
                }
                break;

            case 3:
                printf("Your balance is: %.2lf\n", balance);
                break;

            case 4:
                isFlag = 0;
                printf("Thank you for using ATM Machine.\n");
                break;

            default:
                printf("Invalid choice. Please choose from 1 to 4.\n");
        }
    }while(isFlag);

    return 0;
}
