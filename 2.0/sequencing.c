#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "head_file.h"
void sequencing(void)
{
    char option;
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
    printf("1.According to the sequencing sorting.\n");
    printf("2.According to the student ID sorting.\n");
    printf("3.According to the sex sorting.\n");
    printf("4.According to the initials sorting.\n");
    printf("5.According to the non-professional grade sorting.\n");
    printf("6.According to the grade of professional sorting.\n");
    printf("7.According to the overall sorting.\n");
    printf("8.Back to a layer of menu.\n");
    printf("9.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
        fflush(stdin);
        scanf("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'9'){
            printf("Error! Do you want finish the program?\n");
            printf("Please enter the Y or N ");
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'9');
    fflush(stdin);
    switch(option)
    {
        case '1' : sequencing_seq();      break;
        case '2' : sequencing_id();       break;
        case '3' : sequencing_sex();      break;
        case '4' : sequencing_initials(); break;
        case '5' : sequencing_unpro();    break;
        case '6' : sequencing_pro();      break;
        case '7' : sequencing_overall();  break;
        case '8' : main_menu();           break;
        case '9' : main_menu();           break;
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
        sequencing();
}
void sequencing_seq(void)
{
    List *p,*q,*m;
    Student temp;
    int sign;
    char option;
    system("cls");
    printf("1.ascending order.\n");
    printf("2.descending order.\n");
    printf("3.Back to a layer of menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
        fflush(stdin);
        scanf("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'3'){
            printf("Error! Do you want finish the program?\n");
            printf("Please enter the Y or N ");
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'3');
    fflush(stdin);
    switch(option)
    {
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next)
            if((sign&&(q->member.sequence<m->member.sequence))||(!sign&&(q->member.sequence>m->member.sequence)))
                m=q;
        if(m!=p){
            temp=p->member;
            p->member=m->member;
            m->member=temp;
        }
    }
    printf("Sort data is over ! Press any key back to a layer of menu.\n");
    getch();
    sequencing();
}
void sequencing_id(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    printf("1.ascending order.\n");
    printf("2.descending order.\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
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
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next){
            flag=strcmp(q->member.student_number,m->member.student_number);
            if(sign&&flag<0||!sign&&flag>0)
                m=q;
        }
        if(m!=p){
            temp=p->member;
            p->member=m->member;
            m->member=temp;
        }
    }
    printf("Sort data is over ! Press any key back to a layer of menu.\n");
    getch();
    sequencing();
}
void sequencing_sex(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    printf("1.ascending order.\n");
    printf("2.descending order.\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
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
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next){
            flag=strcmp(q->member.student_number,m->member.student_number);
            if(sign&&flag<0||!sign&&flag>0){
                m=q;
            }
        }
        if(m!=p){
            temp=p->member;
            p->member=m->member;
            m->member=temp;
        }
    }
    printf("Sort data is over ! Press any key back to a layer of menu.\n");
    getch();
    sequencing();
}
void sequencing_initials(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    printf("1.ascending order.\n");
    printf("2.descending order.\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
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
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next){
            flag=strcmp(q->member.name,m->member.name);
            if(sign&&flag<0||!sign&&flag>0)
                m=q;
        }
        if(m!=p){
            temp=p->member;
            p->member=m->member;
            m->member=temp;
        }
    }
    printf("Sort data is over ! Press any key back to a layer of menu.\n");
    getch();
    sequencing();
}
void sequencing_unpro(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    printf("1.ascending order.\n");
    printf("2.descending order.\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
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
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next)
            if((sign&&(q->member.curbstone_score<m->member.curbstone_score))||(!sign&&(q->member.curbstone_score>m->member.curbstone_score)))
                m=q;
        if(m!=p){
            temp=p->member;
            p->member=m->member;
            m->member=temp;
        }
    }
    printf("Sort data is over ! Press any key back to a layer of menu.\n");
    getch();
    sequencing();
}
void sequencing_pro(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    printf("1.ascending order.\n");
    printf("2.descending order.\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
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
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next)
            if((sign&&(q->member.technical_score<m->member.technical_score))||(!sign&&(q->member.technical_score>m->member.technical_score)))
                m=q;
        if(m!=p){
            temp=p->member;
            p->member=m->member;
            m->member=temp;
        }
    }
    printf("Sort data is over ! Press any key back to a layer of menu.\n");
    getch();
    sequencing();
}
void sequencing_overall(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    printf("1.ascending order.\n");
    printf("2.descending order.\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
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
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next)
            if((sign&&(q->member.total_score<m->member.total_score))||(!sign&&(q->member.total_score>m->member.total_score)))
                m=q;
        if(m!=p){
            temp=p->member;
            p->member=m->member;
            m->member=temp;
        }
    }
    printf("Sort data is over ! Press any key back to a layer of menu.\n");
    getch();
    sequencing();
}
