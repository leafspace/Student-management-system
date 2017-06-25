#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "head_file.h"
void file_saving(void)
{
    char option;
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
    printf("1.Save for the Dat file\n");
    printf("2.Save for the Txt file\n");
    printf("3.Back to a layer of menu.\n");
    printf("4.Back to the main menu.\n\n");
    do
    {
        printf("Please enter the serial number : ");
        fflush(stdin);
        scanf("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'4'){
            printf("Error! Do you want finish the program ? \n");
            printf("Please enter the Y or N ");
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : saving_dat(); break;
        case '2' : saving_txt(); break;
        case '3' : according();  break;
        case '4' : main_menu();  break;
    }
    printf("Do you want back to a layer of menu ? \n");
    printf("Please enter the Y or N ");
    scanf("%c",&sign);
    fflush(stdin);
    if(toupper(sign)!='N'){
        system("cls");
        according();
    }
    else
        file_saving();
}
void saving_dat(void)
{
    FILE *fp;
    List *p;
    int n;
    char file[20]={0};
    printf("Please enter the file name : ");
    gets(file);
    if(strstr(file,".dat")==NULL)
        strcat(file,".dat");
    if((fp=fopen(file,"wb"))==NULL){
        printf("File open error! Press any key back to a layer of menu.\n");
        getch();
        file_saving();
    }
    printf("Now have %d student in the program .\n",student_number);
    printf("How many data you want saving ? ");
    scanf("%d",&n);
    if(n>student_number){
        n=student_number;
        printf("Data not enough, system will entering %d data.\n",n);
    }
    p=head->next;
    while(n--){
        fwrite(p->member.name,48,1,fp);
		fwrite(p->member.sex,16,1,fp);
		fwrite(p->member.student_number,10,1,fp);
		fwrite(&p->member.advanced_mathematics,sizeof(float),1,fp);
		fwrite(&p->member.college_english,sizeof(float),1,fp);
		fwrite(&p->member.C_language,sizeof(float),1,fp);
		fwrite(&p->member.computer_introductory_theory,sizeof(float),1,fp);
        p=p->next;
    }
    fclose(fp);
    printf("Entering data is over ! Press any key back to a layer of menu.\n");
    getch();
    file_saving();
}
void saving_txt(void)
{
    FILE *fp;
    List *p;
    int n;
    char file[20]={0};
    printf("Please enter the file name : ");
    gets(file);
    if(strstr(file,".txt")==NULL)
        strcat(file,".txt");
    if((fp=fopen(file,"w"))==NULL){
        printf("File open error! Press any key back to a layer of menu.\n");
        getch();
        file_saving();
    }
    printf("Now have %d student in the program .\n",student_number);
    printf("How many data you want saving ? ");
    scanf("%d",&n);
    if(n>student_number){
        n=student_number;
        printf("Data not enough, system will entering %d data.\n",n);
    }
    p=head->next;
    fprintf(fp,"Name\tSex\tID\t\tMat\tEng\tC\tThe\tS_cur\tS_tech\tSum\n");
    while(n--){
        fprintf(fp,"%d:",p->member.sequence);
        fprintf(fp,"%s\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t",p->member.name,p->member.sex,p->member.student_number,(p->member.advanced_mathematics),(p->member.college_english),(p->member.C_language),(p->member.computer_introductory_theory));
        fprintf(fp,"%.1f\t%.1f\t%.1f\n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
        p=p->next;
    }
    fclose(fp);
    printf("Entering data is over ! Press any key back to a layer of menu.\n");
    getch();
    file_saving();
}
