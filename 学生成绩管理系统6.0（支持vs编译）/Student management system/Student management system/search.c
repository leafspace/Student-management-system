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
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
	                  printf("1.按照序号查找. \n");
	                  printf("2.按照姓名查找. \n");
	                  printf("3.按照学号查找. \n");
	                  printf("4.返回上一层菜单. \n");
	                  printf("5.返回主菜单. \n\n");
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
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.番号の検索を通り. \n");
	                  printf("2.名前通りの検索を. \n");
	                  printf("3.学籍番号の検索を. \n");
	                  printf("4.戻ってきてに一层のメニュー. \n");
	                  printf("5.メインメニューに戻る. \n\n");
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
        scanf_s("%c",&option);
        fflush(stdin);
        if(option<'1'||option>'5'){
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
    do
    {
        switch(language)
        {
            case '1' :
                  {
	                  printf("请输入您要查找的序号,以0为结束查找标志 ：");
                  }
                  break;
            case '2' :
                  {
	                  printf("Please enter your serial number to find,Ends with a 0 to find logo ：");
                  }
                  break;
            case '3' :
                  {
	                  printf("入力してくださいは調べた番号だ,0を完了するために取り立てマークが付けられている ：");
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
	                  printf("序号为 %d 的同学   姓名为：%s   性别为: %s   学号为：%s \n",seq,p->member.name,p->member.sex,p->member.student_number);
                      printf("高等数学成绩为：%.3f  大学英语成绩为：%.3f \nC语言成绩为：%.3f  计算机导论成绩为：%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("非专业成绩为： %.3f  专业成绩为： %.3f  总成绩为：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '2' :
                  {
	                  printf("Serial number for %d classmate's   name is：%s   sex for：%s   student number is：%s \n",seq,p->member.name,p->member.sex,p->member.student_number);
                      printf("Advanced_mathematics is：%.3f  College_english is：%.3f \nC_language is：%.3f  Computer_introductory_theory is：%f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("Curbstone_score is： %.3f  Technical_score is： %.3f  Total_score is：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '3' :
                  {
	                  printf("番号は %d の学友   の名前は %s   性別は%s   学籍番号は%s \n",seq,p->member.name,p->member.sex,p->member.student_number);
                      printf("高級数学成績は：%.3f  大学英語成績は：%.3f \nC語学成績は：%.3f  コンピューター导论成績は：%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("非専攻成績は： %.3f  専门の成績は： %.3f  通算成績は：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
            }
        }
        else{
            switch(language)
            {
                case '1' :
                  {
	                  printf("没有查到这位同学的数据！\n");
                  }
                  break;
                case '2' :
                  {
	                  printf("Have no this student data！\n");
                  }
                  break;
                case '3' :
                  {
	                  printf("こちらはないので学友のデータ！\n");
                  }
                  break;
            }
        }
        switch(language)
        {
            case '1' :
            {
                printf("您可以按回车键对此项目的数值进行更改也可按任意键继续查找！\n");
            }
            break;
            case '2' :
            {
                printf("You can press the return key to this project of numerical changes can also press any key to continue to look for！\n");
            }
            break;
            case '3' :
            {
                printf("お通りエンターキーの数値を変えた場合も任意ボタンを押し続けます！\n");
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
                      printf("查找数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("To find the data over! Please press any key to return to a layer on the menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データの検索を终了!ボタンを押してください任意に戻るに一层のメニュー.\n");
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
    do
    {
        switch(language)
        {
            case '1' :
                  {
	                  printf("请输入您要查找的名字,以0为结束查找标志 ：");
                  }
                  break;
            case '2' :
                  {
	                  printf("Please enter your name to find,Ends with a 0 to find logo ：");
                  }
                  break;
            case '3' :
                  {
	                  printf("入力してください。お探しの名前で、0を完了するために取り立てマークが付けられている ：");
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
	                  printf("姓名为：%s 的同学   序号为 %d   性别为: %s  学号为：%s \n",name,p->member.sequence,p->member.sex,p->member.student_number);
                      printf("高等数学成绩为：%.3f  大学英语成绩为：%.3f \nC语言成绩为：%.3f  计算机导论成绩为：%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("非专业成绩为： %.3f  专业成绩为： %.3f  总成绩为：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '2' :
                  {
	                  printf("name for %s classmate's   Serial number is：%d   sex for：%s   student number is：%s \n",name,p->member.sequence,p->member.sex,p->member.student_number);
                      printf("Advanced_mathematics is：%.3f  College_english is：%.3f \nC_language is：%.3f  Computer_introductory_theory is：%f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("Curbstone_score is： %.3f  Technical_score is： %.3f  Total_score is：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '3' :
                  {
	                  printf("の名前は %s の学友   番号は%d   性別は%s   学籍番号は%s \n",name,p->member.sequence,p->member.sex,p->member.student_number);
                      printf("高級数学成績は：%.3f  大学英語成績は：%.3f \nC語学成績は：%.3f  コンピューター导论成績は：%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("非専攻成績は： %.3f  専门の成績は： %.3f  通算成績は：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
            }
        }
        else{
            switch(language)
            {
                case '1' :
                  {
	                  printf("没有查到这位同学的数据！\n");
                  }
                  break;
                case '2' :
                  {
	                  printf("Have no this student data！\n");
                  }
                  break;
                case '3' :
                  {
	                  printf("こちらはないので学友のデータ！\n");
                  }
                  break;
            }
        }
        switch(language)
        {
            case '1' :
            {
                printf("您可以按回车键对此项目的数值进行更改也可按任意键继续查找！\n");
            }
            break;
            case '2' :
            {
                printf("You can press the return key to this project of numerical changes can also press any key to continue to look for！\n");
            }
            break;
            case '3' :
            {
                printf("お通りエンターキーの数値を変えた場合も任意ボタンを押し続けます！\n");
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
                      printf("查找数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("To find the data over! Please press any key to return to a layer on the menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データの検索を终了!ボタンを押してください任意に戻るに一层のメニュー.\n");
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
    do
    {
        switch(language)
        {
            case '1' :
                  {
	                  printf("请输入您要查找的学号,以0为结束查找标志 ：");
                  }
                  break;
            case '2' :
                  {
	                  printf("Please enter your ID to find,Ends with a 0 to find logo ：");
                  }
                  break;
            case '3' :
                  {
	                  printf("入力してくださいは調べ学籍番号、0を完了するために取り立てマークが付けられている ：");
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
	                  printf("学号为：%s 的同学   序号为 %d   性别为: %s  姓名为：%s \n",id,p->member.sequence,p->member.sex,p->member.name);
                      printf("高等数学成绩为：%.3f  大学英语成绩为：%.3f \nC语言成绩为：%.3f  计算机导论成绩为：%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("非专业成绩为： %.3f  专业成绩为： %.3f  总成绩为：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '2' :
                  {
	                  printf("Student number for %s classmate's   serial number is：%d   sex for：%s   name is：%s \n",id,p->member.sequence,p->member.sex,p->member.name);
                      printf("Advanced_mathematics is：%.3f  College_english is：%.3f \nC_language is：%.3f  Computer_introductory_theory is：%f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("Curbstone_score is： %.3f  Technical_score is： %.3f  Total_score is：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
                case '3' :
                  {
	                  printf("学籍番号は %s の学友   番号は%d   性別は%s   の名前は%s \n",id,p->member.sequence,p->member.sex,p->member.name);
                      printf("高級数学成績は：%.3f  大学英語成績は：%.3f \nC語学成績は：%.3f  コンピューター导论成績は：%.3f \n",p->member.advanced_mathematics,p->member.college_english,p->member.C_language,p->member.computer_introductory_theory);
                      printf("非専攻成績は： %.3f  専门の成績は： %.3f  通算成績は：%.3f \n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
                  }
                  break;
            }
        }
        else{
            switch(language)
            {
                case '1' :
                  {
	                  printf("没有查到这位同学的数据！\n");
                  }
                  break;
                case '2' :
                  {
	                  printf("Have no this student data！\n");
                  }
                  break;
                case '3' :
                  {
	                  printf("こちらはないので学友のデータ！\n");
                  }
                  break;
            }
        }
        switch(language)
        {
            case '1' :
            {
                printf("您可以按回车键对此项目的数值进行更改也可按任意键继续查找！\n");
            }
            break;
            case '2' :
            {
                printf("You can press the return key to this project of numerical changes can also press any key to continue to look for！\n");
            }
            break;
            case '3' :
            {
                printf("お通りエンターキーの数値を変えた場合も任意ボタンを押し続けます！\n");
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
                      printf("查找数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("To find the data over! Please press any key to return to a layer on the menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("データの検索を终了!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    main_menu();
}
