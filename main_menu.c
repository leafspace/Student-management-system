#include "head_file.h"
void main_menu(void)
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
                      printf("1.¼��ѧ����Ϣ\n");
                      printf("2.��ʾ��ǰ��¼�ڲ��ѧ����Ϣ\n");
                      printf("3.ɾ��ѧ����Ϣ\n");
                      printf("4.����ѧ����Ϣ\n");
                      printf("5.����ѧ����Ϣ\n");
                      printf("6.����ѧ����Ϣ\n");
                      printf("7.��������\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.School student achievement\n");
                      printf("2.According to the existing student achievement\n");
                      printf("3.Delete student achievement\n");
                      printf("4.Sort student achievement\n");
                      printf("5.Order the information from the students\n");
                      printf("6.To find the student information\n");
                      printf("7.End of operation\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                      printf("1.ѧ���γɿ�������\n");
                      printf("2.�ˤ��ȬF�ڤδ���ѧ���γɿ��������\n");
                      printf("3.ѧ���΂�������������������\n");
                      printf("4.���л���ѧ���΂������\n");
                      printf("5.ѧ���΂�������������\n");
                      printf("6.ѧ���΂������Η�����\n");
                      printf("7.�B���K����\n\n");
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
        if(option<'1'||option>'7'){
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
    }while(option<'1'||option>'7');
    fflush(stdin);
    switch(option)
    {
        case '1' : entry();       break;
        case '2' : according();   break;
        case '3' : expurgate();   break;
        case '4' : sequencing();  break;
        case '5' : dity();        break;
        case '6' : search();      break;
        case '7' : free_List();   exit(0);       break;
    }
}
void free_List(void)
{
    List *p,*q;
    p=head;
    q=head;
    while(p){
        p=p->next;
        free(q);
        q=p;
    }
}
