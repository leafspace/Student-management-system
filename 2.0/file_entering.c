#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "head_file.h"
void file_entering(void)
{
    char option;
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
    printf("1.From Dat file entry.\n");
    printf("2.From Txt file entry.\n");
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
            printf("Please enter the Y or N : ");
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : entering_dat(); break;
        case '2' : entering_txt(); break;
        case '3' : entry();        break;
        case '4' : main_menu();    break;
    }
    printf("Do you want back to a layer of menu ?\n");
    printf("Please enter the Y or N : ");
    scanf("%c",&sign);
    fflush(stdin);
    if(toupper(sign)!='N'){
        system("cls");
        entry();
    }
    else
        file_entering();
}
void entering_dat(void)
{
    FILE *fp;
    int n;
    char file[20]={0};
    printf("Please enter the file name : ");
    gets(file);
    if(strstr(file,".dat")==NULL)
        strcat(file,".dat");
    if((fp=fopen(file,"r"))==NULL){
        printf("File open error! Press any key back to a layer of menu.\n");
        getch();
        file_entering();
    }
    printf("How many data you want entering ? ");
    scanf("%d",&n);
    while(n--){
        if(feof(fp))
            break;
        fread(head->member.name,48,1,fp);
        fread(head->member.sex,16,1,fp);
        fread(head->member.student_number,10,1,fp);
        fread(&(head->member.advanced_mathematics),sizeof(float),1,fp);
        fread(&(head->member.college_english),sizeof(float),1,fp);
        fread(&(head->member.C_language),sizeof(float),1,fp);
        fread(&(head->member.computer_introductory_theory),sizeof(float),1,fp);

        head->member.sequence=++student_number;
        head->member.curbstone_score = head->member.advanced_mathematics + head->member.college_english;
        head->member.technical_score = head->member.C_language + head->member.computer_introductory_theory;
        head->member.total_score = head->member.curbstone_score + head->member.technical_score;
        {
            List *p;
            p=malloc(sizeof(List));
            p->next=head;
            head=p;
        }
    }
    if(++n)
        printf("In the file data is not enough!\n");
    printf("Entering data is over ! Press any key back to a layer of menu.\n");
    getch();
    file_entering();
}
void entering_txt(void)
{
    FILE *fp;
    int n;
    char file[20]={0};
    printf("Please enter the file name : ");
    gets(file);
    if(strstr(file,".txt")==NULL)
        strcat(file,".txt");
    if((fp=fopen(file,"rb"))==NULL){
        printf("File open error! Press any key back to a layer of menu.\n");
        getch();
        file_entering();
    }
    printf("How many data you want entering ?");
    scanf("%d",&n);
    while(n--){
        if(feof(fp))
            break;
        fscanf(fp,"%s %s %s %f %f %f %f",head->member.name,head->member.sex,head->member.student_number,&(head->member.advanced_mathematics),&(head->member.college_english),&(head->member.C_language),&(head->member.computer_introductory_theory));
        head->member.sequence=++student_number;
        head->member.curbstone_score = head->member.advanced_mathematics + head->member.college_english;
        head->member.technical_score = head->member.C_language + head->member.computer_introductory_theory;
        head->member.total_score = head->member.curbstone_score + head->member.technical_score;
        {
            List *p;
            p=malloc(sizeof(List));
            p->next=head;
            head=p;
        }
    }
    if(++n)
        printf("In the file data is not enough!\n");
    printf("Entering data is over ! Press any key back to a layer of menu.\n");
    getch();
    file_entering();
}
