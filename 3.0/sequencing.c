#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "head_file.h"
void sequencing(void)
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
                      printf("1.按照序号排序.\n");
                      printf("2.按照学号排序.\n");
                      printf("3.按照性别排序.\n");
                      printf("4.按照姓名首字母排序.\n");
                      printf("5.按照非专业成绩排序.\n");
                      printf("6.按照专业成绩排序.\n");
                      printf("7.按照总成绩排序.\n");
                      printf("8.返回上一层菜单.\n");
                      printf("9.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.According to the sequencing sorting.\n");
                      printf("2.According to the student ID sorting.\n");
                      printf("3.According to the sex sorting.\n");
                      printf("4.According to the initials sorting.\n");
                      printf("5.According to the non-professional grade sorting.\n");
                      printf("6.According to the grade of professional sorting.\n");
                      printf("7.According to the overall sorting.\n");
                      printf("8.Back to a layer of menu.\n");
                      printf("9.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.序列順に従って番号.\n");
                      printf("2.学籍番号序列.\n");
                      printf("3.性別序列.\n");
                      printf("4.名前通りの頭文字によって分类される.\n");
                      printf("5.成績どおり非専攻によって分类される.\n");
                      printf("6.成績どおり専攻によって分类される.\n");
                      printf("7.通算成績どおりによって分类される.\n");
                      printf("8.戻ってきてに一层のメニュー.\n");
                      printf("9.メインメニューに戻る.\n\n");
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
        scanf("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'9'){
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
    }while(option<'1'||option>'9');
    fflush(stdin);
    switch(option)
    {
        case '1' : sequencing_seq();      break;
        case '2' : sequencing_id();       break;
        case '3' : sequencing_sex();      break;
        case '4' : sequencing_initials(); break;
        case '5' : sequencing_unpro();    break;
        case '6' : sequencing_pro();      break;
        case '7' : sequencing_overall();  break;
        case '8' : main_menu();           break;
        case '9' : main_menu();           break;
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
    scanf("%c",&sign);
    fflush(stdin);
    if(toupper(sign)!='N'){
        system("cls");
        main_menu();
    }
    else
        sequencing();
}
void sequencing_seq(void)
{
    List *p,*q,*m;
    Student temp;
    int sign;
    char option;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.升序排序.\n");
                      printf("2.降序排序.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.ascending order.\n");
                      printf("2.descending order.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.昇順序列.\n");
                      printf("2.降順序列.\n");
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
        scanf("%1c",&option);
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
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next)
            if((sign&&(q->member.sequence<m->member.sequence))||(!sign&&(q->member.sequence>m->member.sequence)))
                m=q;
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
                      printf("排序数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The sort data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    sequencing();
}
void sequencing_id(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.升序排序.\n");
                      printf("2.降序排序.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.ascending order.\n");
                      printf("2.descending order.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.昇順序列.\n");
                      printf("2.降順序列.\n");
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
        scanf("%1c",&option);
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
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
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
                      printf("排序数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The sort data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    sequencing();
}
void sequencing_sex(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.升序排序.\n");
                      printf("2.降序排序.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.ascending order.\n");
                      printf("2.descending order.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.昇順序列.\n");
                      printf("2.降順序列.\n");
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
        scanf("%1c",&option);
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
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next){
            flag=strcmp(q->member.student_number,m->member.student_number);
            if(sign&&flag<0||!sign&&flag>0){
                m=q;
            }
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
                      printf("排序数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The sort data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    sequencing();
}
void sequencing_initials(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.升序排序.\n");
                      printf("2.降序排序.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.ascending order.\n");
                      printf("2.descending order.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.昇順序列.\n");
                      printf("2.降順序列.\n");
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
        scanf("%1c",&option);
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
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next){
            flag=strcmp(q->member.name,m->member.name);
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
                      printf("排序数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The sort data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    sequencing();
}
void sequencing_unpro(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.升序排序.\n");
                      printf("2.降序排序.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.ascending order.\n");
                      printf("2.descending order.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.昇順序列.\n");
                      printf("2.降順序列.\n");
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
        scanf("%1c",&option);
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
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next)
            if((sign&&(q->member.curbstone_score<m->member.curbstone_score))||(!sign&&(q->member.curbstone_score>m->member.curbstone_score)))
                m=q;
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
                      printf("排序数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The sort data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    sequencing();
}
void sequencing_pro(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.升序排序.\n");
                      printf("2.降序排序.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.ascending order.\n");
                      printf("2.descending order.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.昇順序列.\n");
                      printf("2.降順序列.\n");
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
        scanf("%1c",&option);
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
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next)
            if((sign&&(q->member.technical_score<m->member.technical_score))||(!sign&&(q->member.technical_score>m->member.technical_score)))
                m=q;
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
                      printf("排序数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The sort data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    sequencing();
}
void sequencing_overall(void)
{
    List *p,*q,*m;
    Student temp;
    int sign,flag;
    char option;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.升序排序.\n");
                      printf("2.降序排序.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.ascending order.\n");
                      printf("2.descending order.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.昇順序列.\n");
                      printf("2.降順序列.\n");
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
        scanf("%1c",&option);
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
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : sign=1;       break;
        case '2' : sign=0;       break;
        case '3' : sequencing(); break;
        case '4' : main_menu();  break;
    }
    for(p=head->next;p->next;p=p->next){
        m=p;
        for(q=p->next;q;q=q->next)
            if((sign&&(q->member.total_score<m->member.total_score))||(!sign&&(q->member.total_score>m->member.total_score)))
                m=q;
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
                      printf("排序数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("The sort data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    sequencing();
}
