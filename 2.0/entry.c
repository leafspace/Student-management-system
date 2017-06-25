#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "head_file.h"
void entry(void)
{
    char option;
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
    printf("1.From the keyboard input.\n");
    printf("2.From the file entry.\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number: ");
        fflush(stdin);
        scanf("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'4'){
            printf("Error! Do you want finish the program ?\n");
            printf("Please enter the Y or N : ");
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : keyboard_input(); break;
        case '2' : file_entering();  break;
        case '3' : main_menu();      break;
        case '4' : main_menu();      break;
    }
    fflush(stdin);
    printf("Do you want back to main menu ?\n");
    printf("Please enter the Y or N ");
    scanf("%c",&sign);
    fflush(stdin);
    if(toupper(sign)!='N'){
        system("cls");
        main_menu();
    }
    else
        entry();
}

void keyboard_input(void)
{
    printf("Please use the keyboard enter the data and end with a name of 0 !\n");
    printf("Name   Sex ID       Mat Eng C The\n");
    while(1)
    {
        scanf("%s",head->member.name);
        if(strcmp(head->member.name,"0")<=0)
            break;
        scanf(" %s %s %f %f %f %f",head->member.sex,head->member.student_number,&(head->member.advanced_mathematics),&(head->member.college_english),&(head->member.C_language),&(head->member.computer_introductory_theory));
        head->member.sequence=++student_number;
        head->member.curbstone_score = head->member.advanced_mathematics + head->member.college_english;
        head->member.technical_score = head->member.C_language + head->member.computer_introductory_theory;
        head->member.total_score = head->member.curbstone_score + head->member.technical_score;
        // 下面进行链表的处理。
        {
            List *p;
            p=malloc(sizeof(List));
            p->next=head;
            head=p;
        }
    }
    printf("The input data is over ! Press any key back to a layer of menu.\n");
    getch();
    entry();
}
