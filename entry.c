#include "head_file.h"
void entry(void)
{
    char option;
    char sign;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  ѧ���ɼ�����ϵͳ\n");
                      printf("                                                                       ���� Dack");
                      printf("================================================================================\n");
                      printf("1.�Ӽ�������. \n");
                      printf("2.���ļ�¼��. \n");
                      printf("3.������һ��˵�. \n");
                      printf("4.�������˵�. \n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.From the keyboard input.\n");
                      printf("2.From the file entry.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                      printf("1.���`�ܩ`�ɤ��������Ƥ���.\n");
                      printf("2.�ե����������.\n");
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
        case '1' : keyboard_input(); break;
        case '2' : file_entering();  break;
        case '3' : main_menu();      break;
        case '4' : main_menu();      break;
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
    fflush(stdin);
    scanf_s("%c",&sign);
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
    switch(language)
    {
        case '1' :
                  {
                      printf("���ü����������ݲ���������Ϊ 0 �������� !\n");
                      printf("Name   Sex ID       Mat Eng C The\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Please use the keyboard enter the data and end with a name of 0 !\n");
                      printf("Name   Sex ID       Mat Eng C The\n");
                  }
                  break;
        case '3' :
                  {
                      printf("���`�ܩ`�ɤ�ɤ����ǩ`������ץåȤ��Ƥ���ˤ���ǰ�� 0 �K���������ޤ� !\n");
                      printf("Name   Sex ID       Mat Eng C The\n");
                  }
                  break;
    }
    while(1)
    {
        scanf_s("%s",head->member.name);
        if(strcmp(head->member.name,"0")<=0)
            break;
        scanf_s(" %s %s %f %f %f %f",head->member.sex,head->member.student_number,&(head->member.advanced_mathematics),&(head->member.college_english),&(head->member.C_language),&(head->member.computer_introductory_theory));
        head->member.sequence=++student_number;
        head->member.curbstone_score = head->member.advanced_mathematics + head->member.college_english;
        head->member.technical_score = head->member.C_language + head->member.computer_introductory_theory;
        head->member.total_score = head->member.curbstone_score + head->member.technical_score;
        // �����������Ĵ���
        {
            List *p;
            p=malloc(sizeof(List));
            p->next=head;
            head=p;
        }
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
    entry();
}
