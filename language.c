#include "head_file.h"
void language_choice(void)
{
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
	printf("��ѡ�������ܽ��ܵ����ԣ�\n\n");
	printf("1.��������.\n");
	printf("2.English.\n");
	printf("3.�ձ��Z.\n");
	printf("4.��������.\n\n");
	do
    {
        printf("��������� : ");
        fflush(stdin);
        scanf_s("%1c",&language);
        fflush(stdin);
        if(language<'1'||language>'4'){
            printf("������� ������Ҫ���������� ? \n");
            printf("������ Y ���� N : ");
            scanf_s("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(language<'1'||language>'4');
    fflush(stdin);
    if(language=='4')
        exit(0);
}
