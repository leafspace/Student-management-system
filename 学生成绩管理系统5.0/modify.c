#include "head_file.h"
void modity(List *p)
{
    char option;
    char sign;
    char name[48]={0},id[10]={0},sex[16]={0};
    float score;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  ѧ���ɼ�����ϵͳ\n");
                      printf("                                                                       ���� Dack");
                      printf("================================================================================\n");
                      printf("1.�޸�����. \n");
                      printf("2.�޸�ѧ��. \n");
                      printf("3.�޸��Ա�. \n");
                      printf("4.�޸ĸߵ���ѧ�ɼ�. \n");
                      printf("5.�޸Ĵ�ѧӢ��ɼ�. \n");
                      printf("6.�޸�C���Գɼ�. \n");
                      printf("7.�޸ļ�������۳ɼ�. \n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.Modify the name. \n");
                      printf("2.Modify the student id . \n");
                      printf("3.Modify the gender. \n");
                      printf("4.Modify the higher math scores. \n");
                      printf("5.Modify the university English. \n");
                      printf("6.Modify the C language. \n");
                      printf("7.Introduction to modify the computer results. \n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                      printf("1.��������. \n");
                      printf("2.����ѧ������. \n");
                      printf("3.����ӆ����. \n");
                      printf("4.�����ߵ���ѧ�γɿ����ä�. \n");
                      printf("5.������ѧӢ�Z�γɿ��������. \n");
                      printf("6.����c����γɿ��������. \n");
                      printf("7.����ԥ�`���`���۸����γɿ��������. \n\n");
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
        scanf("%c",&option);
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
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'7');
    fflush(stdin);
    switch(option)
    {
        case '1' : scanf("%s",name);   strcpy(p->member.name,name);                  break;
        case '2' : scanf("%s",id);     strcpy(p->member.student_number,id);          break;
        case '3' : scanf("%s",sex);    strcpy(p->member.sex,sex);                    break;
        case '4' : scanf("%f",&score); p->member.advanced_mathematics=score;         break;
        case '5' : scanf("%f",&score); p->member.college_english=score;              break;
        case '6' : scanf("%f",&score); p->member.C_language=score;                   break;
        case '7' : scanf("%f",&score); p->member.computer_introductory_theory=score; break;
    }
    if(option>'3'){
        p->member.curbstone_score=p->member.advanced_mathematics+p->member.college_english;
        p->member.technical_score=p->member.C_language+ p->member.computer_introductory_theory;
        p->member.total_score=p->member.curbstone_score+p->member.technical_score;
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("�޸ĳɹ����밴��������أ�\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Modify the success��Please press any key to return��\n");
                  }
                  break;
        case '3' :
                  {
                      printf("�����ɹ�!�ܥ����Ѻ���Ƥ�����������ˑ��äƤ�����\n");
                  }
                  break;
    }
    getch();
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  ѧ���ɼ�����ϵͳ\n");
                      printf("                                                                      ���ԣ�Dack");
	                  printf("================================================================================\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                  }
                  break;
    }
}
