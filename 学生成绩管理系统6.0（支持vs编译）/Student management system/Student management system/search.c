#include "head_file.h"
void search(void)
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
	                  printf("1.������Ų���. \n");
	                  printf("2.������������. \n");
	                  printf("3.����ѧ�Ų���. \n");
	                  printf("4.������һ��˵�. \n");
	                  printf("5.�������˵�. \n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.Search record on serial number. \n");
	                  printf("2.Search record on name. \n");
	                  printf("3.Search record on ID. \n");
	                  printf("4.Returns a layer on the menu. \n");
	                  printf("5.Back to the main menu. \n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                      printf("1.���ŤΗ�����ͨ��. \n");
	                  printf("2.��ǰͨ��Η�����. \n");
	                  printf("3.ѧ�����ŤΗ�����. \n");
	                  printf("4.���äƤ��Ƥ�һ��Υ�˥�`. \n");
	                  printf("5.�ᥤ���˥�`�ˑ���. \n\n");
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
        scanf_s("%c",&option);
        fflush(stdin);
        if(option<'1'||option>'5'){
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
    }while(option<'1'||option>'5');
    fflush(stdin);
    switch(option)
    {
        case '1' : search_seq();     break;
        case '2' : search_name();    break;
        case '3' : search_id();      break;
        case '4' : main_menu();      break;
        case '5' : main_menu();      break;
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
        search();
}
void search_seq(void)
{
    int seq;
    List *p;
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
    do
    {
        switch(language)
        {
            case '1' :
                  {
	                  printf("��������Ҫ���ҵ����,��0Ϊ�������ұ�־ ��");
                  }
                  break;
            case '2' :
                  {
	                  printf("Please enter your serial number to find,Ends with a 0 to find logo ��");
                  }
                  break;
            case '3' :
                  {
	                  printf("�������Ƥ����������{�٤����Ť�,0�����ˤ��뤿���ȡ�����ƥީ`�����������Ƥ��� ��");
                  }
                  break;
        }
        scanf_s("%d",&seq);
        if(seq==0)
            break;
        p=head->next;
        while(p){
            if(p->member.sequence==seq)
                break;
            p=p->next;
        }
        if(p){
            switch(language)
            {
                case '1' :
                  {
	                  printf("���Ϊ %d ��ͬѧ   ����Ϊ��%s   �Ա�Ϊ: %s   ѧ��Ϊ��%s \n",seq,p->member.name,p->member.sex,p->member.student_number);
                      printf("�ߵ���ѧ�ɼ�Ϊ��%.3f  ��ѧӢ��ɼ�Ϊ��%.3f \nC���Գɼ�Ϊ��%.3f  ��������۳ɼ�Ϊ��%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("��רҵ�ɼ�Ϊ�� %.3f  רҵ�ɼ�Ϊ�� %.3f  �ܳɼ�Ϊ��%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '2' :
                  {
	                  printf("Serial number for %d classmate's   name is��%s   sex for��%s   student number is��%s \n",seq,p->member.name,p->member.sex,p->member.student_number);
                      printf("Advanced_mathematics is��%.3f  College_english is��%.3f \nC_language is��%.3f  Computer_introductory_theory is��%f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("Curbstone_score is�� %.3f  Technical_score is�� %.3f  Total_score is��%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '3' :
                  {
	                  printf("���Ť� %d ��ѧ��   ����ǰ�� %s   �Ԅe��%s   ѧ�����Ť�%s \n",seq,p->member.name,p->member.sex,p->member.student_number);
                      printf("�߼���ѧ�ɿ��ϣ�%.3f  ��ѧӢ�Z�ɿ��ϣ�%.3f \nC�Zѧ�ɿ��ϣ�%.3f  ����ԥ�`���`���۳ɿ��ϣ�%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("�ǌ����ɿ��ϣ� %.3f  ���Ťγɿ��ϣ� %.3f  ͨ��ɿ��ϣ�%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
            }
        }
        else{
            switch(language)
            {
                case '1' :
                  {
	                  printf("û�в鵽��λͬѧ�����ݣ�\n");
                  }
                  break;
                case '2' :
                  {
	                  printf("Have no this student data��\n");
                  }
                  break;
                case '3' :
                  {
	                  printf("������Ϥʤ��Τ�ѧ�ѤΥǩ`����\n");
                  }
                  break;
            }
        }
        switch(language)
        {
            case '1' :
            {
                printf("�����԰��س����Դ���Ŀ����ֵ���и���Ҳ�ɰ�������������ң�\n");
            }
            break;
            case '2' :
            {
                printf("You can press the return key to this project of numerical changes can also press any key to continue to look for��\n");
            }
            break;
            case '3' :
            {
                printf("��ͨ�ꥨ�󥿩`���`��������䤨�����Ϥ�����ܥ����Ѻ���A���ޤ���\n");
            }
            break;
        }
        char c;
        c=getch();
        if(c==13)
            modity(p);
        else
            printf("--------------------------------------------------------------------------------");
    }while(1);
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("To find the data over! Please press any key to return to a layer on the menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("�ǩ`���Η���������!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    main_menu();
}
void search_name(void)
{
    char name[48]={0};
    List *p;
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
    do
    {
        switch(language)
        {
            case '1' :
                  {
	                  printf("��������Ҫ���ҵ�����,��0Ϊ�������ұ�־ ��");
                  }
                  break;
            case '2' :
                  {
	                  printf("Please enter your name to find,Ends with a 0 to find logo ��");
                  }
                  break;
            case '3' :
                  {
	                  printf("�������Ƥ�����������̽������ǰ�ǡ�0�����ˤ��뤿���ȡ�����ƥީ`�����������Ƥ��� ��");
                  }
                  break;
        }
        gets_s(name,48);
        if(strcmp(name,"0")<=0)
            break;
        p=head->next;
        while(p){
            if(strcmp(p->member.name,name)==0)
                break;
            p=p->next;
        }
        if(p){
            switch(language)
            {
                case '1' :
                  {
	                  printf("����Ϊ��%s ��ͬѧ   ���Ϊ %d   �Ա�Ϊ: %s  ѧ��Ϊ��%s \n",name,p->member.sequence,p->member.sex,p->member.student_number);
                      printf("�ߵ���ѧ�ɼ�Ϊ��%.3f  ��ѧӢ��ɼ�Ϊ��%.3f \nC���Գɼ�Ϊ��%.3f  ��������۳ɼ�Ϊ��%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("��רҵ�ɼ�Ϊ�� %.3f  רҵ�ɼ�Ϊ�� %.3f  �ܳɼ�Ϊ��%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '2' :
                  {
	                  printf("name for %s classmate's   Serial number is��%d   sex for��%s   student number is��%s \n",name,p->member.sequence,p->member.sex,p->member.student_number);
                      printf("Advanced_mathematics is��%.3f  College_english is��%.3f \nC_language is��%.3f  Computer_introductory_theory is��%f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("Curbstone_score is�� %.3f  Technical_score is�� %.3f  Total_score is��%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '3' :
                  {
	                  printf("����ǰ�� %s ��ѧ��   ���Ť�%d   �Ԅe��%s   ѧ�����Ť�%s \n",name,p->member.sequence,p->member.sex,p->member.student_number);
                      printf("�߼���ѧ�ɿ��ϣ�%.3f  ��ѧӢ�Z�ɿ��ϣ�%.3f \nC�Zѧ�ɿ��ϣ�%.3f  ����ԥ�`���`���۳ɿ��ϣ�%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("�ǌ����ɿ��ϣ� %.3f  ���Ťγɿ��ϣ� %.3f  ͨ��ɿ��ϣ�%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
            }
        }
        else{
            switch(language)
            {
                case '1' :
                  {
	                  printf("û�в鵽��λͬѧ�����ݣ�\n");
                  }
                  break;
                case '2' :
                  {
	                  printf("Have no this student data��\n");
                  }
                  break;
                case '3' :
                  {
	                  printf("������Ϥʤ��Τ�ѧ�ѤΥǩ`����\n");
                  }
                  break;
            }
        }
        switch(language)
        {
            case '1' :
            {
                printf("�����԰��س����Դ���Ŀ����ֵ���и���Ҳ�ɰ�������������ң�\n");
            }
            break;
            case '2' :
            {
                printf("You can press the return key to this project of numerical changes can also press any key to continue to look for��\n");
            }
            break;
            case '3' :
            {
                printf("��ͨ�ꥨ�󥿩`���`��������䤨�����Ϥ�����ܥ����Ѻ���A���ޤ���\n");
            }
            break;
        }
        char c;
        c=getch();
        if(c==13)
            modity(p);
        else
            printf("--------------------------------------------------------------------------------");
    }while(1);
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("To find the data over! Please press any key to return to a layer on the menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("�ǩ`���Η���������!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    main_menu();
}
void search_id(void)
{
    char id[10]={0};
    List *p;
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
    do
    {
        switch(language)
        {
            case '1' :
                  {
	                  printf("��������Ҫ���ҵ�ѧ��,��0Ϊ�������ұ�־ ��");
                  }
                  break;
            case '2' :
                  {
	                  printf("Please enter your ID to find,Ends with a 0 to find logo ��");
                  }
                  break;
            case '3' :
                  {
	                  printf("�������Ƥ����������{��ѧ�����š�0�����ˤ��뤿���ȡ�����ƥީ`�����������Ƥ��� ��");
                  }
                  break;
        }
        gets_s(id,10);
        if(strcmp(id,"0")<=0)
            break;
        p=head->next;
        while(p){
            if(strcmp(p->member.student_number,id)==0)
                break;
            p=p->next;
        }
        if(p){
            switch(language)
            {
                case '1' :
                  {
	                  printf("ѧ��Ϊ��%s ��ͬѧ   ���Ϊ %d   �Ա�Ϊ: %s  ����Ϊ��%s \n",id,p->member.sequence,p->member.sex,p->member.name);
                      printf("�ߵ���ѧ�ɼ�Ϊ��%.3f  ��ѧӢ��ɼ�Ϊ��%.3f \nC���Գɼ�Ϊ��%.3f  ��������۳ɼ�Ϊ��%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("��רҵ�ɼ�Ϊ�� %.3f  רҵ�ɼ�Ϊ�� %.3f  �ܳɼ�Ϊ��%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '2' :
                  {
	                  printf("Student number for %s classmate's   serial number is��%d   sex for��%s   name is��%s \n",id,p->member.sequence,p->member.sex,p->member.name);
                      printf("Advanced_mathematics is��%.3f  College_english is��%.3f \nC_language is��%.3f  Computer_introductory_theory is��%f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("Curbstone_score is�� %.3f  Technical_score is�� %.3f  Total_score is��%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '3' :
                  {
	                  printf("ѧ�����Ť� %s ��ѧ��   ���Ť�%d   �Ԅe��%s   ����ǰ��%s \n",id,p->member.sequence,p->member.sex,p->member.name);
                      printf("�߼���ѧ�ɿ��ϣ�%.3f  ��ѧӢ�Z�ɿ��ϣ�%.3f \nC�Zѧ�ɿ��ϣ�%.3f  ����ԥ�`���`���۳ɿ��ϣ�%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("�ǌ����ɿ��ϣ� %.3f  ���Ťγɿ��ϣ� %.3f  ͨ��ɿ��ϣ�%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
            }
        }
        else{
            switch(language)
            {
                case '1' :
                  {
	                  printf("û�в鵽��λͬѧ�����ݣ�\n");
                  }
                  break;
                case '2' :
                  {
	                  printf("Have no this student data��\n");
                  }
                  break;
                case '3' :
                  {
	                  printf("������Ϥʤ��Τ�ѧ�ѤΥǩ`����\n");
                  }
                  break;
            }
        }
        switch(language)
        {
            case '1' :
            {
                printf("�����԰��س����Դ���Ŀ����ֵ���и���Ҳ�ɰ�������������ң�\n");
            }
            break;
            case '2' :
            {
                printf("You can press the return key to this project of numerical changes can also press any key to continue to look for��\n");
            }
            break;
            case '3' :
            {
                printf("��ͨ�ꥨ�󥿩`���`��������䤨�����Ϥ�����ܥ����Ѻ���A���ޤ���\n");
            }
            break;
        }
        char c;
        c=getch();
        if(c==13)
            modity(p);
        else
            printf("--------------------------------------------------------------------------------");
    }while(1);
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("To find the data over! Please press any key to return to a layer on the menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("�ǩ`���Η���������!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    main_menu();
}
