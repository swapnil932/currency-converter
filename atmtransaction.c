#include <stdio.h>

int main() {
    int choice;
    float balance = 10000.0; // Starting balance
    float amount;

    while (1) {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Your current balance is: ₹%.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ₹");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid deposit amount.\n");
            } else {
                balance += amount;
                printf("₹%.2f deposited successfully.\n", amount);
                printf("Updated balance: ₹%.2f\n", balance);
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ₹");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid withdrawal amount.\n");
            } else if (amount > balance) {
                printf("Insufficient balance.\n");
            } else {
                balance -= amount;
                printf("₹%.2f withdrawn successfully.\n", amount);
                printf("Updated balance: ₹%.2f\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            return 0;

        default:
            printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
