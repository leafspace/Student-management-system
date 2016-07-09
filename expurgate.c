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
                      printf("                                  学生成绩管理系统\n");
                      printf("                                                                      来自：Dack");
	                  printf("================================================================================\n");
                      printf("1.按照学生序号删除.\n");
                      printf("2.按照学生学号来删除.\n");
                      printf("3.按照学生姓名来删除.\n");
                      printf("4.返回上一层菜单.\n");
                      printf("5.返回主菜单.\n\n");
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
                      printf("                              生徒の成績管理システム\n");
                      printf("                                                                      出自：dack");
	                  printf("================================================================================\n");
                      printf("1.入力してください削除する学生の番号にしなければならない.\n");
                      printf("2.入力してください削除しなければならない」とした学生の学籍番号だった.\n");
                      printf("3.入力してください削除しなければならない学生の名前だ.\n");
                      printf("4.戻ってきてに一层のメニュー.\n");
                      printf("5.メインメニューに戻る.\n\n");
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
                       printf("请输入您想要删除的序号以 0 结束 !\n");
                  }
                  break;
        case '2' :
                  {
                       printf("Please enter the sequence of you want delete , and end of enter 0 !\n");
                  }
                  break;
        case '3' :
                  {
                       printf("入力してください削除しようとした番号を 0 に終了した !\n");
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
                           printf("请输入第 %d 个数据 : ",n++);
                      }
                      break;
            case '2' :
                      {
                           printf("Please enter the %d number : ",n++);
                      }
                      break;
            case '3' :
                      {
                           printf(" %d のデータ入力してください : ",n++);
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
                               printf("这个序号不存在 !\n");
                          }
                          break;
                case '2' :
                          {
                               printf("This sequence is nonentity !\n");
                          }
                          break;
                case '3' :
                          {
                               printf("この番号には存在しません !\n");
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
                      printf("删除数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Delete data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("删除タインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
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
                       printf("请输入您想要删除的学号以 0 结束 !\n");
                  }
                  break;
        case '2' :
                  {
                       printf("Please enter the ID of you want delete , and end of enter 0 !\n");
                  }
                  break;
        case '3' :
                  {
                       printf("入力してください削除しようとした学生の番号を 0 に終了した !\n");
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
                           printf("请输入第 %d 个学号 : ",n++);
                      }
                      break;
            case '2' :
                      {
                           printf("Please enter the %d ID : ",n++);
                      }
                      break;
            case '3' :
                      {
                           printf(" %d のデータ入力してく学生の番号 : ",n++);
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
                               printf("这个学号不存在 !\n");
                          }
                          break;
                case '2' :
                          {
                               printf("This ID is nonentity !\n");
                          }
                          break;
                case '3' :
                          {
                               printf("この学生の番号には存在しません !\n");
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
                      printf("删除数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Delete data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("删除タインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
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
                       printf("请输入您想要删除的名字以 0 结束 !\n");
                  }
                  break;
        case '2' :
                  {
                       printf("Please enter the Name of you want delete , and end of enter 0 !\n");
                  }
                  break;
        case '3' :
                  {
                       printf("入力してください削除しようとした学生を 0 に終了した !\n");
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
                           printf("请输入第 %d 个姓名 : ",n++);
                      }
                      break;
            case '2' :
                      {
                           printf("Please enter the %d Name : ",n++);
                      }
                      break;
            case '3' :
                      {
                           printf(" %d のデータ入力してく学生 : ",n++);
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
                               printf("这个名字不存在 !\n");
                          }
                          break;
                case '2' :
                          {
                               printf("This Name is nonentity !\n");
                          }
                          break;
                case '3' :
                          {
                               printf("このには存在しません !\n");
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
                      printf("删除数据结束！请按任意键返回上一层菜单.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Delete data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("删除タインプットが终わりました!ボタンを押してください任意に戻るに一层のメニュー.\n");
                  }
                  break;
    }
    getch();
    expurgate();
}
