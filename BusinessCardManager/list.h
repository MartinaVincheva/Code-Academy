#pragma once

typedef struct business_card business_card;

typedef struct business_card
{
    char *firstName;
    char *middleName;
    char *lastName;
    int homeTelNumber;
    int bussinessTelNumber;
    char *email;
    char *company;
    char *companyAddress;
    business_card *next;
} business_card;

business_card *addNodeToStart(business_card *list_start, business_card *node);
void dellList(business_card *start);
int lenghtList(business_card *start);
