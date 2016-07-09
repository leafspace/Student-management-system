#include "head_file.h"
void expurgate(void)
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
                      printf("1.����ѧ�����ɾ��.\n");
                      printf("2.����ѧ��ѧ����ɾ��.\n");
                      printf("3.����ѧ��������ɾ��.\n");
                      printf("4.������һ��˵�.\n");
                      printf("5.�������˵�.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.According to the serial number to delete.\n");
                      printf("2.According to the student ID deleted.\n");
                      printf("3.According to the name to delete.\n");
                      printf("4.Back to a layer of menu.\n");
                      printf("5.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                      printf("1.�������Ƥ���������������ѧ���η��Ťˤ��ʤ���Фʤ�ʤ�.\n");
                      printf("2.�������Ƥ��������������ʤ���Фʤ�ʤ����Ȥ���ѧ����ѧ�����Ť��ä�.\n");
                      printf("3.�������Ƥ��������������ʤ���Фʤ�ʤ�ѧ������ǰ��.\n");
                      printf("4.���äƤ��Ƥ�һ��Υ�˥�`.\n");
                      printf("5.�ᥤ���˥�`�ˑ���.\n\n");
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
        case '1' : del_sequence(); break;
        case '2' : del_id();       break;
        case '3' : del_name();     break;
        case '4' : main_menu();    break;
        case '5' : main_menu();    break;
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
        expurgate();
}
void del_sequence(void)
{
    List *p,*q;
    int x,n=1;
   switch(language)
    {
        case '1' :
                  {
                       printf("����������Ҫɾ��������� 0 ���� !\n");
                  }
                  break;
        case '2' :
                  {
                       printf("Please enter the sequence of you want delete , and end of enter 0 !\n");
                  }
                  break;
        case '3' :
                  {
                       printf("�������Ƥ��������������褦�Ȥ������Ť� 0 �˽K�ˤ��� !\n");
                  }
                  break;
    }
    while(1)
    {
        p=head->next;
        q=head;
        switch(language)
        {
            case '1' :
                      {
                           printf("������� %d ������ : ",n++);
                      }
                      break;
            case '2' :
                      {
                           printf("Please enter the %d number : ",n++);
                      }
                      break;
            case '3' :
                      {
                           printf(" %d �Υǩ`���������Ƥ������� : ",n++);
                      }
                      break;
        }
        scanf_s("%d",&x);
        if(x<1)
            break;
        while(p&&(p->member.sequence!=x)){
            q=p;
            p=p->next;
        }
        if(p)
            q->next=p->next;
        else{
            switch(language)
            {
                case '1' :
                          {
                               printf("�����Ų����� !\n");
                          }
                          break;
                case '2' :
                          {
                               printf("This sequence is nonentity !\n");
                          }
                          break;
                case '3' :
                          {
                               printf("���η��Ťˤϴ��ڤ��ޤ��� !\n");
                          }
                          break;
            }
            n--;
        }
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("ɾ�����ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Delete data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("ɾ��������ץåȤ��դ��ޤ���!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    expurgate();
}
void del_id(void)
{
    List *p,*q;
    int n=1;
    char ID[10]={0};
    switch(language)
    {
        case '1' :
                  {
                       printf("����������Ҫɾ����ѧ���� 0 ���� !\n");
                  }
                  break;
        case '2' :
                  {
                       printf("Please enter the ID of you want delete , and end of enter 0 !\n");
                  }
                  break;
        case '3' :
                  {
                       printf("�������Ƥ��������������褦�Ȥ���ѧ���η��Ť� 0 �˽K�ˤ��� !\n");
                  }
                  break;
    }
    while(1)
    {
        p=head->next;
        q=head;
        switch(language)
        {
            case '1' :
                      {
                           printf("������� %d ��ѧ�� : ",n++);
                      }
                      break;
            case '2' :
                      {
                           printf("Please enter the %d ID : ",n++);
                      }
                      break;
            case '3' :
                      {
                           printf(" %d �Υǩ`���������Ƥ�ѧ���η��� : ",n++);
                      }
                      break;
        }
        gets_s(ID,10);
        if(!atoi(ID))
            break;
        int f=1;
		while(p){
			if(strcmp(p->member.student_number,ID)==0){
				q->next=p->next;
				f=0;
			}
			else
			    q=p;
            p=p->next;
		}
		if(f){
			switch(language)
            {
                case '1' :
                          {
                               printf("���ѧ�Ų����� !\n");
                          }
                          break;
                case '2' :
                          {
                               printf("This ID is nonentity !\n");
                          }
                          break;
                case '3' :
                          {
                               printf("����ѧ���η��Ťˤϴ��ڤ��ޤ��� !\n");
                          }
                          break;
            }
            n--;
		}
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("ɾ�����ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Delete data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("ɾ��������ץåȤ��դ��ޤ���!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    expurgate();
}
void del_name(void)
{
    List *p,*q;
    int n=1;
    char name[48]={0};
    switch(language)
    {
        case '1' :
                  {
                       printf("����������Ҫɾ���������� 0 ���� !\n");
                  }
                  break;
        case '2' :
                  {
                       printf("Please enter the Name of you want delete , and end of enter 0 !\n");
                  }
                  break;
        case '3' :
                  {
                       printf("�������Ƥ��������������褦�Ȥ���ѧ���� 0 �˽K�ˤ��� !\n");
                  }
                  break;
    }
    while(1)
    {
        p=head->next;
        q=head;
        switch(language)
        {
            case '1' :
                      {
                           printf("������� %d ������ : ",n++);
                      }
                      break;
            case '2' :
                      {
                           printf("Please enter the %d Name : ",n++);
                      }
                      break;
            case '3' :
                      {
                           printf(" %d �Υǩ`���������Ƥ�ѧ�� : ",n++);
                      }
                      break;
        }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        int f=1;
        gets_s(name,48);
        {
            char strA[48],strB[48];
            if(!strcmp(name,"0"))
                break;
            strcpy_s(strB,48,name);
            while(p){
                strcpy_s(strA,48,p->member.name);
                if(strcmp(strA,strB)==0){
                    q->next=p->next;
					f=0;
				}
				else
                    q=p;
                p=p->next;
            }
        }
        if(f){
            switch(language)
            {
                case '1' :
                          {
                               printf("������ֲ����� !\n");
                          }
                          break;
                case '2' :
                          {
                               printf("This Name is nonentity !\n");
                          }
                          break;
                case '3' :
                          {
                               printf("���Τˤϴ��ڤ��ޤ��� !\n");
                          }
                          break;
            }
            n--;
        }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("ɾ�����ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Delete data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("ɾ��������ץåȤ��դ��ޤ���!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    expurgate();
}
