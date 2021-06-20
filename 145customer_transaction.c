/*
Date   : 11-3-2021
Aim    : update custromer record according to transaction record
Source : let us c 12.i
*/
#include <stdio.h>

typedef struct
{
    int accno;
    char name[30];
    float balance;
}customer;

typedef struct
{
    int accno;
    char trans_type;
    float amount;
}trans;

void main()
{
    FILE *customer_f, *updated_c_f, *trans_f;
    customer c[10];
    trans t;
    int customer_n = 10, i;
    
    customer_f = fopen("c_files/customer.dat","r");
    updated_c_f = fopen("c_files/customer_updated.dat","w");
    trans_f = fopen("c_files/transection.dat","r");
    if (customer_f == NULL)
    {
        printf("Cant open customer.dat\n");
    }
    if (updated_c_f == NULL)
    {
        printf("Cant open customer_updated.dat\n");
    }
    if (trans_f == NULL)
    {
        printf("Cant open transrction.dat\n");
    }
    
    for (i = 0; i < customer_n; i++)
    {
        fscanf(customer_f, "%d%*c%[^,]%*c%f", &c[i].accno, &c[i].name, &c[i].balance);
    }

    for (i = 0; i < customer_n; i++)
    {
        fseek(trans_f, 0, SEEK_SET);
        while (!feof(trans_f))
        {
            fscanf(trans_f, "%d%*c%c%*c%f", &t.accno, &t.trans_type, &t.amount);
            if (c[i].accno == t.accno)
            {
                if (t.trans_type == 'D')
                {
                    c[i].balance += t.amount;
                }
                else if (t.trans_type == 'W')
                {
                    c[i].balance -= t.amount;
                }
                if (c[i].balance < 100)
                {
                    c[i].balance = 100;
                }
            }
        }
        fprintf(updated_c_f, "%d,%s,%f\n", c[i].accno, c[i].name, c[i].balance);
    }

    fclose(customer_f);
    fclose(trans_f);
    fclose(updated_c_f);
}