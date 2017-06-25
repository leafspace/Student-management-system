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
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                       来自 Dack");
                      printf("================================================================================\n");
                      printf("1.修改姓名. \n");
                      printf("2.修改学号. \n");
                      printf("3.修改性别. \n");
                      printf("4.修改高等数学成绩. \n");
                      printf("5.修改大学英语成绩. \n");
                      printf("6.修改C语言成绩. \n");
                      printf("7.修改计算机导论成绩. \n\n");
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
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.改正姓名. \n");
                      printf("2.改正学籍番号. \n");
                      printf("3.戸籍訂正を. \n");
                      printf("4.改正高等数学の成績だった. \n");
                      printf("5.改正大学英語の成績を出した. \n");
                      printf("6.改正c言语の成績を出した. \n");
                      printf("7.コンピューター导论改正の成績を出した. \n\n");
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
        scanf("%c",&option);
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
                      printf("修改成功！请按任意键返回！\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Modify the success！Please press any key to return！\n");
                  }
                  break;
        case '3' :
                  {
                      printf("改正成功!ボタンを押してください任意に戻ってきた！\n");
                  }
                  break;
    }
    getch();
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
}
