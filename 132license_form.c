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
    int valid;
} license_form;

void fillForm(license_form *form);
void validateForm(license_form *form);
void validateName(license_form *form);
void validateMobileNo(license_form *form);
void validateAge(license_form *form);

void main()
{
    license_form form;
    fillForm(&form);
    validateForm(&form);
}

void fillForm(license_form *form)
{
    printf("Enter name: ");
    gets(form->name);
    printf("Enter mobile no.: ");
    gets(form->mobile_no);
    printf("Enter age: ");
    scanf("%d",&form->age);
    form->valid = 1;
}

void validateForm(license_form *form)
{
    validateName(form);
    validateMobileNo(form);
    validateAge(form);
    if(form->valid)
    {
        printf("\nLicense generated sucessfully.");
    }
    else
    {
        printf("\nFailed to generate license, Entered details are invalid.");
    }
}

void validateName(license_form *form)
{
    int i;
    for (i = 0; form->name[i] != '\0'; i++)
    {
        if(form->name[i] < 'A' || form->name[i] > 'Z' && form->name[i] < 'a' || form->name[i] > 'z' || form->name[i] == ' ')
        {
            form->valid = 0;
            break;
        }
    }
}

void validateMobileNo(license_form *form)
{
    int i;
    if(strlen(form->mobile_no) != 10)
    {
        form->valid = 0;
        return;
    }
    for (i = 0; form->mobile_no[i] != '\0'; i++)
    {
        if(form->mobile_no[i] < 48 || form->mobile_no[i] > 57)
        {
            form->valid = 0;
            break;
        }
    }
}

void validateAge(license_form *form)
{
    if(form->age < 18)
    {
        form->valid = 0;
    }
}