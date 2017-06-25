#include "head_file.h"
void file_entering(void)
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
                      printf("1.从 Dat 文件中录入.\n");
                      printf("2.从 Txt 文件中录入.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.From Dat file entry.\n");
                      printf("2.From Txt file entry.\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.入力は Dat ファイルだった.\n");
                      printf("2.入力は Txt ファイルだった.\n");
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
        case '1' : entering_dat(); break;
        case '2' : entering_txt(); break;
        case '3' : entry();        break;
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
        entry();
    }
    else
        file_entering();
}
void entering_dat(void)
{
    FILE *fp;
    int n;
    char file[20]={0};
    switch(language)
    {
        case '1' :
                  {
                      printf("请输入文件名 : ");
                  }
                  break;
        case '2' :
                  {
                      printf("Please enter the file name : ");
                  }
                  break;
        case '3' :
                  {
                      printf("入力してください件名 : ");
                  }
                  break;
    }
    gets_s(file,80);
    if(strstr(file,".dat")==NULL)
        strcat_s(file,80,".dat");
	fp = NULL;
    if((fp=fopen_s(fp,file,"r"))==NULL){
        switch(language)
        {
            case '1' :
                      {
                          printf("文件打开失败！请按任意键返回上一层菜单.\n");
                      }
                      break;
            case '2' :
                      {
                          printf("File open error! Press any key back to a layer of menu.\n");
                      }
                      break;
            case '3' :
                      {
                          printf("ファイルを开けて失敗しない!ボタンを押してください任意に戻るに一层のメニュー.\n");
                      }
                      break;
        }
        getch();
        file_entering();
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("您想录入多少信息 ? ");
                  }
                  break;
        case '2' :
                  {
                      printf("How many data you want entering ? ");
                  }
                  break;
        case '3' :
                  {
                      printf("いくらですか。おで入力されている情報を手に入れた ? ");
                  }
                  break;
    }
    scanf_s("%d",&n);
    while(n--){
        if(feof(fp))
            break;
        fread(head->member.name,48,1,fp);
        fread(head->member.sex,16,1,fp);
        fread(head->member.student_number,10,1,fp);
        fread(&(head->member.advanced_mathematics),sizeof(float),1,fp);
        fread(&(head->member.college_english),sizeof(float),1,fp);
        fread(&(head->member.C_language),sizeof(float),1,fp);
        fread(&(head->member.computer_introductory_theory),sizeof(float),1,fp);

        head->member.sequence=++student_number;
        head->member.curbstone_score = head->member.advanced_mathematics + head->member.college_english;
        head->member.technical_score = head->member.C_language + head->member.computer_introductory_theory;
        head->member.total_score = head->member.curbstone_score + head->member.technical_score;
        {
            List *p;
            p=malloc(sizeof(List));
            p->next=head;
            head=p;
        }
    }
    if(++n)
        switch(language)
        {
            case '1' :
                      {
                          printf("文件中的数据不够\n");
                      }
                      break;
            case '2' :
                      {
                          printf("In the file data is not enough!\n");
                      }
                      break;
            case '3' :
                      {
                          printf("データが不足し!\n");
                      }
                      break;
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
    file_entering();
}
void entering_txt(void)
{
    FILE *fp;
    int n;
    char file[20]={0};
    switch(language)
    {
        case '1' :
                  {
                      printf("请输入文件名 : ");
                  }
                  break;
        case '2' :
                  {
                      printf("Please enter the file name : ");
                  }
                  break;
        case '3' :
                  {
                      printf("入力してください件名 : ");
                  }
                  break;
    }
    gets_s(file,80);
    if(strstr(file,".txt")==NULL)
        strcat_s(file,80,".txt");
	fp = NULL;
    if((fp=fopen_s(fp,file,"rb"))==NULL){
        switch(language)
        {
            case '1' :
                      {
                          printf("文件打开失败！请按任意键返回上一层菜单.\n");
                      }
                      break;
            case '2' :
                      {
                          printf("File open error! Press any key back to a layer of menu.\n");
                      }
                      break;
            case '3' :
                      {
                          printf("ファイルを开けて失敗しない!ボタンを押してください任意に戻るに一层のメニュー.\n");
                      }
                      break;
        }
        getch();
        file_entering();
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("您想录入多少信息 ? ");
                  }
                  break;
        case '2' :
                  {
                      printf("How many data you want entering ? ");
                  }
                  break;
        case '3' :
                  {
                      printf("いくらですか。おで入力されている情報を手に入れた ? ");
                  }
                  break;
    }
    scanf_s("%d",&n);
    while(n--){
        if(feof(fp))
            break;
        fscanf_s(fp,"%s %s %s %f %f %f %f",head->member.name,head->member.sex,head->member.student_number,&(head->member.advanced_mathematics),&(head->member.college_english),&(head->member.C_language),&(head->member.computer_introductory_theory));
        head->member.sequence=++student_number;
        head->member.curbstone_score = head->member.advanced_mathematics + head->member.college_english;
        head->member.technical_score = head->member.C_language + head->member.computer_introductory_theory;
        head->member.total_score = head->member.curbstone_score + head->member.technical_score;
        {
            List *p;
            p=malloc(sizeof(List));
            p->next=head;
            head=p;
        }
    }
    if(++n)
        switch(language)
        {
            case '1' :
                      {
                          printf("文件中的数据不够\n");
                      }
                      break;
            case '2' :
                      {
                          printf("In the file data is not enough!\n");
                      }
                      break;
            case '3' :
                      {
                          printf("データが不足し!\n");
                      }
                      break;
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
    file_entering();
}
