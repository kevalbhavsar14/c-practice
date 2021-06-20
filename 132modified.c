/*
Date   : 18-2-2021
Aim    : license form validation
Source : brain
*/
#include <stdio.h>
#include <string.h>

typedef struct license_form
{
    char name[15];
    char mobile_no[11];
    int age;
    int valid_name;
    int valid_no;
    int valid_age;
} license_form;

void fillForm(license_form *form);
void validateName(license_form *form);
void validateMobileNo(license_form *form);
void validateAge(license_form *form);

void main()
{
    license_form form;
    fillForm(&form);
    validateName(&form);
    validateMobileNo(&form);
    validateAge(&form);
    if(form.valid_name)
    {
        printf("1. Name: valid\n");
    }
    else
    {
        printf("1. Name: invalid\n");
    }
    if(form.valid_no)
    {
        printf("2. Mobile no.: valid\n");
    }
    else
    {
        printf("2. Mobile no.: invalid\n");
    }
    if(form.valid_age)
    {
        printf("3. Age: valid\n");
    }
    else
    {
        printf("3. Age: invalid\n");
    }
    
    if(form.valid_name && form.valid_no && form.valid_age)
    {
        printf("\nLicense generated sucessfully.");
    }
    else
    {
        printf("\nFailed to generate license.");
    }
}

void fillForm(license_form *form)
{
    printf("Enter name: ");
    gets(form->name);
    printf("Enter mobile no.: ");
    gets(form->mobile_no);
    printf("Enter age: ");
    scanf("%d",&form->age);
    form->valid_name = 1;
    form->valid_no = 1;
    form->valid_age = 1;
}

void validateName(license_form *form)
{
    int i;
    for (i = 0; form->name[i] != '\0'; i++)
    {
        if(form->name[i] < 'A' || form->name[i] > 'Z' && form->name[i] < 'a' || form->name[i] > 'z' || form->name[i] == ' ')
        {
            form->valid_name = 0;
            break;
        }
    }
}

void validateMobileNo(license_form *form)
{
    int i;
    if(strlen(form->mobile_no) != 10)
    {
        form->valid_no = 0;
        return;
    }
    for (i = 0; form->mobile_no[i] != '\0'; i++)
    {
        if(form->mobile_no[i] < 48 || form->mobile_no[i] > 57)
        {
            form->valid_no = 0;
            break;
        }
    }
}

void validateAge(license_form *form)
{
    if(form->age < 18)
    {
        form->valid_age = 0;
    }
}