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
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.录入学生信息\n");
                      printf("2.显示当前记录在册的学生信息\n");
                      printf("3.删除学生信息\n");
                      printf("4.排序学生信息\n");
                      printf("5.整理学生信息\n");
                      printf("6.查找学生信息\n");
                      printf("7.结束程序\n\n");
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
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.学生の成績を入力\n");
                      printf("2.によると現在の存在学生の成績を出した\n");
                      printf("3.学生の個人情報を削除した」と\n");
                      printf("4.序列化の学生の個人情報\n");
                      printf("5.学生の個人情報を整理して\n");
                      printf("6.学生の個人情報の検索を\n");
                      printf("7.笲︽を終えた\n\n");
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
        scanf_s("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'7'){
            switch(language)
            {
                case '1' :
                      {
                          printf("错误！你想结束程序吗 ?\n");
                          printf("请输入 Y 或者 N : ");
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
                          printf("誤ったもので、あなたは终わりにプログラムだったのだろうか？\n");
                          printf("Y あるいは Nで入力してください : ");
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
