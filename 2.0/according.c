#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "head_file.h"
void according(void)
{
    char option;
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
    printf("1.Show the current recorded student performance\n");
    printf("2.Save the current student achievement (record to a file)\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number ?");
        fflush(stdin);
        scanf("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'4'){
            printf("Error! Do you want finish the program?\n");
            printf("Please enter the Y or N ");
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : show_student(); break;
        case '2' : file_saving();  break;
        case '3' : main_menu();    break;
        case '4' : main_menu();    break;
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
        according();
}
void show_student(void)
{
    List *p;
    p=head->next;
    if(!student_number){
        printf("Now have no data in the program ! Press any key back to a layer of menu.\n");
        getch();
        according();
    }
    printf("Seq Name  Sex  ID\t   Mat\t  Eng\t  C\tThe\tS_cur\tS_tech\tSum\n");
    while(p){
        printf("%d:",p->member.sequence);
        printf("%s  %s  %s  %.2f  %.2f   %.2f   %.2f   ",p->member.name,p->member.sex,p->member.student_number,(p->member.advanced_mathematics),(p->member.college_english),(p->member.C_language),(p->member.computer_introductory_theory));
        printf("%.1f   %.1f   %.1f\n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
        p=p->next;
    }
}
