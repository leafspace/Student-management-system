#include "head_file.h"
void according(void)
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
                      printf("1.��ʾ��ǰ�Ѿ���¼�ڲ��ѧ������Ϣ.\n");
                      printf("2.���浱ǰע���ѧ����Ϣ���ļ�.\n");
                      printf("3.������һ��˵�.\n");
                      printf("4.�������˵�.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.Show the current recorded student performance.\n");
                      printf("2.Save the current student achievement (record to a file).\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                      printf("1.ӛ�h�ˤ��ȬF�ڤϤ��Ǥ˼�����ѧ�������Ҋ����.\n");
                      printf("2.���椵�������äƵ��h�������ؤΥ�å��`�����ĕ�����������.\n");
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
        case '1' : show_student(); break;
        case '2' : file_saving();  break;
        case '3' : main_menu();    break;
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
        switch(language)
        {
            case '1' :
                      {
                          printf("���ڳ�����û�����ݣ��밴�����������һ��˵�.\n");
                      }
                      break;
            case '2' :
                      {
                          printf("Now have no data in the program ! Press any key back to a layer of menu.\n");
                      }
                      break;
            case '3' :
                      {
                          printf("����־A���Ǥϥǩ`��!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                      }
                      break;
        }
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
