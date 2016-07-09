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
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                       来自 Dack");
                      printf("================================================================================\n");
                      printf("1.从键盘输入. \n");
                      printf("2.从文件录入. \n");
                      printf("3.返回上一层菜单. \n");
                      printf("4.返回主菜单. \n\n");
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
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.キーボードを入力してから.\n");
                      printf("2.ファイルを入力.\n");
                      printf("3.戻ってきてに一层のメニュー.\n");
                      printf("4.メインメニューに戻る.\n\n");
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
        if(option<'1'||option>'4'){
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
                      printf("你想返回主菜单吗 ?\n");
                      printf("请输入 Y 或者 N  ");
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
                      printf("あなたに戻りたいメインメニューだったのだろうか ?\n");
                      printf("Y あるいは N で入力してください ");
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
                      printf("请用键盘输入数据并且以名字为 0 结束输入 !\n");
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
                      printf("キーボードをどうぞデータインプットしてそれには名前は 0 終了入力します !\n");
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
        // 下面进行链表的处理。
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
                      printf("输入数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The input data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    entry();
}
