#include "head_file.h"
void language_choice(void)
{
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
	printf("请选择您所能接受的语言！\n\n");
	printf("1.简体中文.\n");
	printf("2.English.\n");
	printf("3.日本語.\n");
	printf("4.结束程序.\n\n");
	do
    {
        printf("请输入序号 : ");
        fflush(stdin);
        scanf_s("%1c",&language);
        fflush(stdin);
        if(language<'1'||language>'4'){
            printf("输入错误 ！您想要结束程序吗 ? \n");
            printf("请输入 Y 或者 N : ");
            scanf_s("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(language<'1'||language>'4');
    fflush(stdin);
    if(language=='4')
        exit(0);
}
