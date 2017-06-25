#include "head_file.h"
void file_entering(void)
{
    char option;
    char sign;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  ѧ���ɼ�����ϵͳ\n");
                      printf("                                                                      ���ԣ�Dack");
	                  printf("================================================================================\n");
                      printf("1.�� Dat �ļ���¼��.\n");
                      printf("2.�� Txt �ļ���¼��.\n");
                      printf("3.������һ��˵�.\n");
                      printf("4.�������˵�.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.From Dat file entry.\n");
                      printf("2.From Txt file entry.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                      printf("1.������ Dat �ե�������ä�.\n");
                      printf("2.������ Txt �ե�������ä�.\n");
                      printf("3.���äƤ��Ƥ�һ��Υ�˥�`.\n");
                      printf("4.�ᥤ���˥�`�ˑ���.\n\n");
                  }
                  break;
    }
    do
    {
        switch(language)
        {
            case '1' :
                      {
                          printf("��������� : ");
                      }
                      break;
            case '2' :
                      {
                          printf("Please enter the serial number : ");
                      }
                      break;
            case '3' :
                      {
                          printf("���Ť��������Ƥ������� : ");
                      }
                      break;
        }
        fflush(stdin);
        scanf_s("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'4'){
            switch(language)
            {
                case '1' :
                      {
                          printf("����������������� ?\n");
                          printf("������ Y ���� N : ");
                      }
                      break;
                case '2' :
                      {
                          printf("Error! Do you want finish the program?\n");
                          printf("Please enter the Y or N : ");
                      }
                      break;
                case '3' :
                      {
                          printf("�`�ä���Τǡ����ʤ����դ��˥ץ������ä��Τ�������\n");
                          printf("Y ���뤤�� N���������Ƥ������� : ");
                      }
                      break;
            }
            scanf_s("%c",&sign);
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
    switch(language)
    {
        case '1' :
                  {
                      printf("���뷵�����˵��� ?\n");
                      printf("������ Y ���� N  ");
                  }
                  break;
        case '2' :
                  {
                      printf("Do you want back to main menu ?\n");
                      printf("Please enter the Y or N ");
                  }
                  break;
        case '3' :
                  {
                      printf("���ʤ��ˑ��ꤿ���ᥤ���˥�`���ä��Τ����� ?\n");
                      printf("Y ���뤤�� N ���������Ƥ������� ");
                  }
                  break;
    }
    scanf_s("%c",&sign);
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
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ļ��� : ");
                  }
                  break;
        case '2' :
                  {
                      printf("Please enter the file name : ");
                  }
                  break;
        case '3' :
                  {
                      printf("�������Ƥ����������� : ");
                  }
                  break;
    }
    gets_s(file,80);
    if(strstr(file,".dat")==NULL)
        strcat_s(file,80,".dat");
	fp = NULL;
    if((fp=fopen_s(fp,file,"r"))==NULL){
        switch(language)
        {
            case '1' :
                      {
                          printf("�ļ���ʧ�ܣ��밴�����������һ��˵�.\n");
                      }
                      break;
            case '2' :
                      {
                          printf("File open error! Press any key back to a layer of menu.\n");
                      }
                      break;
            case '3' :
                      {
                          printf("�ե�����򿪤���ʧ�����ʤ�!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                      }
                      break;
        }
        getch();
        file_entering();
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("����¼�������Ϣ ? ");
                  }
                  break;
        case '2' :
                  {
                      printf("How many data you want entering ? ");
                  }
                  break;
        case '3' :
                  {
                      printf("������Ǥ�����������������Ƥ��������֤���줿 ? ");
                  }
                  break;
    }
    scanf_s("%d",&n);
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
        switch(language)
        {
            case '1' :
                      {
                          printf("�ļ��е����ݲ���\n");
                      }
                      break;
            case '2' :
                      {
                          printf("In the file data is not enough!\n");
                      }
                      break;
            case '3' :
                      {
                          printf("�ǩ`�������㤷!\n");
                      }
                      break;
        }
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The input data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("�ǩ`������ץåȤ��դ��ޤ���!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    file_entering();
}
void entering_txt(void)
{
    FILE *fp;
    int n;
    char file[20]={0};
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ļ��� : ");
                  }
                  break;
        case '2' :
                  {
                      printf("Please enter the file name : ");
                  }
                  break;
        case '3' :
                  {
                      printf("�������Ƥ����������� : ");
                  }
                  break;
    }
    gets_s(file,80);
    if(strstr(file,".txt")==NULL)
        strcat_s(file,80,".txt");
	fp = NULL;
    if((fp=fopen_s(fp,file,"rb"))==NULL){
        switch(language)
        {
            case '1' :
                      {
                          printf("�ļ���ʧ�ܣ��밴�����������һ��˵�.\n");
                      }
                      break;
            case '2' :
                      {
                          printf("File open error! Press any key back to a layer of menu.\n");
                      }
                      break;
            case '3' :
                      {
                          printf("�ե�����򿪤���ʧ�����ʤ�!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                      }
                      break;
        }
        getch();
        file_entering();
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("����¼�������Ϣ ? ");
                  }
                  break;
        case '2' :
                  {
                      printf("How many data you want entering ? ");
                  }
                  break;
        case '3' :
                  {
                      printf("������Ǥ�����������������Ƥ��������֤���줿 ? ");
                  }
                  break;
    }
    scanf_s("%d",&n);
    while(n--){
        if(feof(fp))
            break;
        fscanf_s(fp,"%s %s %s %f %f %f %f",head->member.name,head->member.sex,head->member.student_number,&(head->member.advanced_mathematics),&(head->member.college_english),&(head->member.C_language),&(head->member.computer_introductory_theory));
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
        switch(language)
        {
            case '1' :
                      {
                          printf("�ļ��е����ݲ���\n");
                      }
                      break;
            case '2' :
                      {
                          printf("In the file data is not enough!\n");
                      }
                      break;
            case '3' :
                      {
                          printf("�ǩ`�������㤷!\n");
                      }
                      break;
        }
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The input data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("�ǩ`������ץåȤ��դ��ޤ���!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    file_entering();
}
