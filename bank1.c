
#include <stdio.h>
#define MAX_ACCOUNTS 100

typedef struct {
    int accountNumber;
    char name[100];
    float balance;
} BankAccount;

BankAccount accounts[MAX_ACCOUNTS];
int accountCount = 0;

// Create a new account
void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        printf("\nCannot create more accounts.\n");
        return;
    }

    BankAccount acc;
    acc.accountNumber = accountCount + 1;

    printf("\nEnter Name: ");
    scanf(" %[^\n]", acc.name);

    acc.balance = 0.0;

    accounts[accountCount] = acc;
    accountCount++;

    printf("\nAccount created successfully! Account Number: %d\n", acc.accountNumber);
}

// View account details
void viewAccounts() {
    if (accountCount == 0) {
        printf("\nNo accounts found.\n");
        return;
    }
