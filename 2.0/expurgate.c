#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "head_file.h"
void expurgate(void)
{
    char option;
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
    printf("1.According to the serial number to delete\n");
    printf("2.According to the student ID deleted\n");
    printf("3.According to the name to delete\n");
    printf("4.Back to a layer of menu.\n");
    printf("5.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
        fflush(stdin);
        scanf("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'5'){
            printf("Error! Do you want finish the program?\n");
            printf("Please enter the Y or N ");
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'5');
    fflush(stdin);
    switch(option)
    {
        case '1' : del_sequence(); break;
        case '2' : del_id();       break;
        case '3' : del_name();     break;
        case '4' : main_menu();    break;
        case '5' : main_menu();    break;
    }
    printf("Do you want back to main menu ?\n");
    printf("Please enter the Y or N ");
    scanf("%c",&sign);
    fflush(stdin);
    if(toupper(sign)!='N'){
        system("cls");
        main_menu();
    }
    else
        expurgate();
}
void del_sequence(void)
{
    List *p,*q;
    int x,n=1;
    printf("Please enter the sequence of you want delete , and end of enter 0 !\n");
    while(1)
    {
        p=head->next;
        q=head;
        printf("Please enter the %d number : ",n++);
        scanf("%d",&x);
        if(x<1)
            break;
        while(p&&(p->member.sequence!=x)){
            q=p;
            p=p->next;
        }
        if(p)
            q->next=p->next;
        else{
            printf("This sequence is nonentity !\n");
            n--;
        }
    }
    printf("Delete data is over ! Press any key back to a layer of menu.\n");
    getch();
    expurgate();
}
void del_id(void)
{
    List *p,*q;
    int n=1;
    char ID[10]={0};
    printf("Please enter the ID of you want delete , and end of enter 0 !\n");
    while(1)
    {
        p=head->next;
        q=head;
        printf("Please enter the %d ID : ",n++);
        gets(ID);
        if(!atoi(ID))
            break;
        while(p&&strcmp(p->member.student_number,ID)){
            q=p;
            p=p->next;
        }
        if(p)
            q->next=p->next;
        else{
            printf("This ID is nonentity !\n");
            n--;
        }
    }
    printf("Delete data is over ! Press any key back to a layer of menu.\n");
    getch();
    expurgate();
}
void del_name(void)
{
    List *p,*q;
    int n=1;
    char name[48]={0};
    printf("Please enter the name of you want delete , and end of enter 0 !\n");
    while(1)
    {
        p=head->next;
        q=head;
        printf("Please enter the %d name : ",n++);
        gets(name);
        if(strcmp(p->member.name,"0"))//
            break;//
        while(p&&!strcmp(p->member.name,name)){
            q=p;
            p=p->next;
        }
        if(p)
            q->next=p->next;
        else{
            printf("This name is nonentity !\n");
            n--;
        }
    }
    printf("Delete data is over ! Press any key back to a layer of menu.\n");
    getch();
    expurgate();
}
