#include "head_file.h"
void dity(void)
{
    List *p,*q,*i,*m;
    int sign,flag;
    Student temp;
    system("cls");
     switch(language)
    {
        case '1' :
                  {
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
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
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                  }
                  break;
    }
    i=head->next;
    while(i){
        p=i->next;
        q=i;
        while(p){
            if(strcmp(i->member.student_number,p->member.student_number)==0)
                q->next=p->next;
            else
                q=p;
            p=p->next;
        }
        i=i->next;
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("1.升序排序.\n");
                      printf("2.降序排序.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("1.Ascending order.\n");
                      printf("2.Descending order.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("1.昇順序列.\n");
                      printf("2.降順序列.\n\n");
                  }
                  break;
    }
    do
    {
        switch(language)
        {
            case '1' :
                      {
                          printf("请输入序号 : ");
                      }
                      break;
            case '2' :
                      {
                          printf("Please enter the serial number : ");
                      }
                      break;
            case '3' :
                      {
                          printf("番号を入力してください : ");
                      }
                      break;
        }
        fflush(stdin);
        scanf_s("%1d",&sign);
        fflush(stdin);
    }while(sign<1||sign>2);
    if(sign==2)
        sign=0;
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
     switch(language)
    {
        case '1' :
                  {
                      printf("整理数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Sorting data over! Please press any key to return to a layer on the menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("整理データが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    main_menu();
}
