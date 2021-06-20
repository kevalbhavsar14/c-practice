/*
Date   : 20-2-2021
Aim    : bank account management system
Source : brain
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[15];
    float balance;
    char type;
    float interest_rate;
    int valid;
} account;

void addAccount(account *);
void validateName(account *);
void listAccounts(account[], int, int);
void manageAccount(account[], int);
void withdraw(account *);
void deposite(account *);
void addInterest(account *);
void load(FILE *, account[], int *);
void save(FILE *, account[], int);

void main()
{
    account acc[5];
    char select;
    int count = 0;
    int exit = 0;
    FILE *save_file = fopen("c_files/acc_save.dat", "a+");
    if (save_file == NULL)
    {
        printf("Error opening file.");
        return;
    }
    fseek(save_file, 0, SEEK_SET);
    load(save_file, acc, &count);

    // main menu
    while (!exit)
    {
        system("cls");
        printf("\nMain Menu\n");
        if (count == 5)
        {
            printf("\n1. Remove account");
        }
        else
        {
            printf("\n1. Add account");
        }
        printf("\n2. List Accounts");
        printf("\n3. Manage Accounts");
        printf("\n4. Exit\n");
        select = getch();

        switch (select)
        {
        case '1':
            if (count == 5)
            {
                printf("\nSuccessfully removed last account.");
                count--;
                save(save_file, acc, count);
            }
            else
            {
                addAccount(&acc[count]);
                if (acc[count].valid)
                {
                    printf("\nSuccessfully added account.");
                    count++;
                    save(save_file, acc, count);
                }
                else
                {
                    printf("\nFailed to add account.");
                }
            }
            break;
        case '2':
            listAccounts(acc, count, 1);
            break;
        case '3':
            manageAccount(acc, count);
            save(save_file, acc, count);
            break;
        case '4':
            printf("\nExiting");
            exit = 1;
            break;
        default:
            printf("\nInvalid option");
        }
        printf("\nPress any key to continue...");
        getch();
        system("cls");
    }
}

void addAccount(account *acc)
{
    acc->valid = 1;
    system("cls");
    printf("\nAdd account\n");
    printf("\nEnter holder's name: ");
    fflush(stdin);
    gets(acc->name);
    validateName(acc);
    printf("Enter initial balance: ");
    scanf("%f", &acc->balance);
    printf("Enter account type\n");
    printf("Press S for Savings account\n");
    printf("      C for current account\n");
    acc->type = getch();
    if (acc->type == 'S' || acc->type == 's')
    {
        acc->interest_rate = 4.0;
        acc->type = 'S'; // Capitalizing letter if small for later use
    }
    else if (acc->type == 'C' || acc->type == 'c')
    {
        acc->interest_rate = 0;
        acc->type = 'C'; // Capitalizing letter if small for later use
    }
    else
    {
        acc->valid = 0;
    }
}

void validateName(account *acc)
{
    int i;
    for (i = 0; acc->name[i] != '\0'; i++)
    {
        if ((acc->name[i] < 'A' || acc->name[i] > 'Z' && acc->name[i] < 'a' || acc->name[i] > 'z') && acc->name[i] != ' ')
        {
            acc->valid = 0;
            break;
        }
    }
}

void listAccounts(account acc[], int count, int details)
{
    int i;
    system("cls");
    printf("\nAccounts: %d / 5\n", count); // Account count
    if (count == 0)
    {
        printf("\nNo accounts to be listed.");
        return;
    }
    // Account details
    for (i = 0; i < count; i++)
    {
        printf("\nAccount no.: %d", i + 1);
        printf("\nName: %s", acc[i].name);
        if (details)
        {
            printf("\nBalance: %.2f", acc[i].balance);
            printf("\nType: ");
            if (acc[i].type == 'S')
            {
                printf("Savings");
            }
            else if (acc[i].type == 'C')
            {
                printf("Current");
            }
            else
            {
                printf("Invalid %d", acc[i].type);
            }
            printf("\nInterest rate: %.2f%%\n", acc[i].interest_rate);
        }
    }
}

void manageAccount(account acc[], int count)
{
    int i;
    char select, temp;
    system("cls");
    listAccounts(acc, count, 0);
    if (count == 0)
        return;
    printf("\nSelect account to manage");
    temp = getch();
    i = (int)temp - 48;
    while (1)
    {
        system("cls");
        printf("\nManage account\n");
        printf("\n1. Withdraw");
        printf("\n2. Deposite");
        printf("\n3. Add Interest");
        printf("\n4. Go back\n");

        select = getch();
        switch (select)
        {
        case '1':
            withdraw(&acc[i - 1]);
            break;
        case '2':
            deposite(&acc[i - 1]);
            break;
        case '3':
            addInterest(&acc[i - 1]);
            break;
        case '4':
            printf("\nGoing back to main menu");
            return;
        default:
            printf("\nInvalid option");
        }
        printf("\nPress any key to continue...");
        getch();
    }
}

void withdraw(account *acc)
{
    float withdraw;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &withdraw);
    if (withdraw < acc->balance)
    {
        acc->balance -= withdraw;
        printf("\nAmount Withdrawn successfully.");
    }
    else
    {
        printf("\nInsufficient balance.");
    }
    printf("\nBalance: %.2f", acc->balance);
}

void deposite(account *acc)
{
    float deposite;
    printf("\nEnter amount to deposite: ");
    scanf("%f", &deposite);
    if (deposite < 0)
    {
        printf("\nInvalid Input.");
    }
    else
    {
        acc->balance += deposite;
        printf("\nAmount deposited successfully.");
    }
    printf("\nBalance: %.2f", acc->balance);
}

void addInterest(account *acc)
{
    acc->balance += acc->interest_rate / 100 * acc->balance;
    printf("\nInterest added to balance Successfully.");
    printf("\nBalance: %.2f", acc->balance);
}

void load(FILE *file, account acc[], int *count)
{
    char line[50], buffer[4][20];
    int j = 0, k = 0;
    fscanf(file, "%d%*c", count);
    for (int i_ = 0; i_ < *count; i_++)
    {
        // fscanf(file, "%*c%[^\n]s", &acc[i].name);
        // fscanf(file, "%*c%f", &acc[i].balance);
        // fscanf(file, "%*c%c", &acc[i].type);
        // fscanf(file, "%*c%f", &acc[i].interest_rate);
        fgets(line, 50, file);
        // printf("%s\n", line);
        // sscanf(line, "%[^|]s%[^|]s%[^|]s%s", name, balance, type, insterest_rate);
        j = 0;
        k = 0;
        for (int i = 0; line[i] != '\0'; i++)
        {
            if (line[i] == '|')
            {
                buffer[j][k] = '\0';
                j++;
                k = 0;
                continue;
            }
            buffer[j][k] = line[i];
            k++;
        }
        strcpy(acc[i_].name, buffer[0]);
        sscanf(buffer[1], "%f", &acc[i_].balance);
        acc[i_].type = buffer[2][0];
        sscanf(buffer[3], "%f", &acc[i_].interest_rate);

        // for (int i = 0; i < 4; i++)
        // {
        //     printf("%s ", buffer[i]);
        // }
        // printf("\n");
    }
}

void save(FILE *file, account acc[], int count)
{
    fseek(file, 0, SEEK_SET);
    fprintf(file, "%d\n", count);
    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%s|%f|%c|%f\n", acc[i].name, acc[i].balance, acc[i].type, acc[i].interest_rate);
        acc[i].valid = 1;
    }
}
