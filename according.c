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
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.显示当前已经记录在册的学生的信息.\n");
                      printf("2.保存当前注册的学生信息到文件.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
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
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.記録によると現在はすでに件数の学生の情報が見られる.\n");
                      printf("2.保存さしあたって登録した数へのメッセージを文書に署名した.\n");
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
        case '1' : show_student(); break;
        case '2' : file_saving();  break;
        case '3' : main_menu();    break;
        case '4' : main_menu();    break;
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
                          printf("现在程序中没有数据！请按任意键返回上一层菜单.\n");
                      }
                      break;
            case '2' :
                      {
                          printf("Now have no data in the program ! Press any key back to a layer of menu.\n");
                      }
                      break;
            case '3' :
                      {
                          printf("今の手続きではデータ!ボタンを押してください任意に戻るに一层のメニュー.\n");
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
