#include "head_file.h"
void file_saving(void)
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
                      printf("1.保存为 Dat 文件.\n");
                      printf("2.保存为 Txt 文件.\n");
                      printf("3.返回上一层菜单.\n");
                      printf("4.返回主菜单.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.Save for the Dat file\n");
                      printf("2.Save for the Txt file\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.保存は Dat ファイルだった.\n");
                      printf("2.保存は Txt ファイルだった.\n");
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
        case '1' : saving_dat(); break;
        case '2' : saving_txt(); break;
        case '3' : according();  break;
        case '4' : main_menu();  break;
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
        according();
    }
    else
        file_saving();
}
void saving_dat(void)
{
    FILE *fp;
    List *p;
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
    if((fp=fopen_s(fp,file,"wb"))==NULL){
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
        file_saving();
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("现在有 %d 学生信息在程序中 .\n",student_number);
                      printf("您想保存多少信息 ? ");
                  }
                  break;
        case '2' :
                  {
                      printf("Now have %d student in the program .\n",student_number);
                      printf("How many data you want saving ? ");
                  }
                  break;
        case '3' :
                  {
                      printf("现在は %d 学生の個人情報に、手続き中だ .\n",student_number);
                      printf("いくらですか。おで保管されている情報を手に入れた ? ");
                  }
                  break;
    }
    scanf_s("%d",&n);
    if(n>student_number){
        n=student_number;
        switch(language)
        {
            case '1' :
                      {
                          printf("数据不够，系统将输入 %d 数据.\n",n);
                      }
                      break;
            case '2' :
                      {
                          printf("Data not enough, system will entering %d data.\n",n);
                      }
                      break;
            case '3' :
                      {
                          printf("データが不足し、システムが入力 %d 関連資料を押収した.\n",n);
                      }
                      break;
        }
    }
    p=head->next;
    while(n--){
        fwrite(p->member.name,48,1,fp);
		fwrite(p->member.sex,16,1,fp);
		fwrite(p->member.student_number,10,1,fp);
		fwrite(&p->member.advanced_mathematics,sizeof(float),1,fp);
		fwrite(&p->member.college_english,sizeof(float),1,fp);
		fwrite(&p->member.C_language,sizeof(float),1,fp);
		fwrite(&p->member.computer_introductory_theory,sizeof(float),1,fp);
        p=p->next;
    }
    fclose(fp);
    switch(language)
    {
        case '1' :
                  {
                      printf("保存数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Saving data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("保存タインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    file_saving();
}
void saving_txt(void)
{
    FILE *fp;
    List *p;
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
    if((fp=fopen_s(file,80,"w"))==NULL){
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
        file_saving();
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("现在有 %d 学生信息在程序中 .\n",student_number);
                      printf("您想保存多少信息 ? ");
                  }
                  break;
        case '2' :
                  {
                      printf("Now have %d student in the program .\n",student_number);
                      printf("How many data you want saving ? ");
                  }
                  break;
        case '3' :
                  {
                      printf("现在は %d 学生の個人情報に、手続き中だ .\n",student_number);
                      printf("いくらですか。おで保管されている情報を手に入れた ? ");
                  }
                  break;
    }
    scanf_s("%d",&n);
    if(n>student_number){
        n=student_number;
        switch(language)
        {
            case '1' :
                      {
                          printf("数据不够，系统将输入 %d 数据.\n",n);
                      }
                      break;
            case '2' :
                      {
                          printf("Data not enough, system will entering %d data.\n",n);
                      }
                      break;
            case '3' :
                      {
                          printf("データが不足し、システムが入力 %d 関連資料を押収した.\n",n);
                      }
                      break;
        }
    }
    p=head->next;
    fprintf(fp,"Name\tSex\tID\t\tMat\tEng\tC\tThe\tS_cur\tS_tech\tSum\n");
    while(n--){
        fprintf(fp,"%d:",p->member.sequence);
        fprintf(fp,"%s\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t",p->member.name,p->member.sex,p->member.student_number,(p->member.advanced_mathematics),(p->member.college_english),(p->member.C_language),(p->member.computer_introductory_theory));
        fprintf(fp,"%.1f\t%.1f\t%.1f\n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
        p=p->next;
    }
    fclose(fp);
    switch(language)
    {
        case '1' :
                  {
                      printf("保存数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Saving data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("保存タインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    file_saving();
}
