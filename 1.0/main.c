#include <stdio.h>
int input(struct Student student[]);
struct Student
{
    char id[10];
    char name[10];
    int class;
    char sex[4];
    int score[4];
    int total_points;
}student[100]={0};
int main()
{
	/*����ϵͳ*/
	char ch;
	int student_num=0;
	struct Student * p=student;
	printf("                                 ѧ���ɼ�����ϵͳ\n");
	printf("================================================================================\n");
	do
	{
	    printf("1.¼��ѧ���ɼ�\n");
	    printf("2.��ʾѧ���ɼ�\n");
	    printf("3.���ѧ���ɼ�\n");
	    printf("4.ɾ��ѧ���ɼ�\n");
	    printf("5.����ѧ���ɼ�\n");
	    printf("6.��������\n");
	    printf("================================================================================\n");
		do{
			scanf("%c", &ch);
			if (ch<'1' || ch>'6')
				printf("������������䣡\n");
		} while (ch<'1' || ch>'6');
	    switch(ch)
	    {
		    case '1':;break;
	        case '2':;break;
	        case '3':;break;
	        case '4':;break;
	        case '5':;break;
	        case '6':exit(0);break;
        }
	}while(1);
	return 0;
}
int input(struct Student student[])
{
    int num=0,i;
    char c;
    FILE *fp;
    if((fp=fopen("student_date.txt","r"))==NULL){
        printf("open file error!\n");
        exit(0);
    }
    printf("1.��ԭ����ļ��ж�ȡ����\n");
    printf("2.�Ӽ�������һ�����ݣ�ע�����ܻ�ɾ��ԭ���洢�����ݣ�\n");
    scanf("%c",&c);
    printf("test !");
    switch(c)
    {
    /*if(ch=='1')
    {
        while(�ļ�����������־){
            ���ļ����ж�ȡ

        }
    }*/
        case '2':
            {
                do
                {
                    printf("������ѧ��ѧ��(�Ի��н���)��");
                    gets(student[num].id);
                    printf("\n������ѧ������(�Ի��н���):");
                    gets(student[num].name);
                    printf("\n������ѧ���༶(������λ��):");
                    scanf("%d",&student[num].class);
                    printf("\n������ѧ���Ա�(����boy��girl����ʾ):");
                    gets(student[num].sex);
                    printf("\n������ѧ�����Ź��εķ�����\n");
                    printf("��ѧ��");scanf("%d",&student[num].score[0]);
                    printf("���ģ�");scanf("%d",&student[num].score[1]);
                    printf("Ӣ�");scanf("%d",&student[num].score[2]);
                    printf("רҵ��");scanf("%d",&student[num].score[3]);
                    for(i=0;i<4;i++)
                        student[num].total_points+=student[num].score[i];
                    printf("\n%s�Ĺ����ܷ�Ϊd",student[num].name,student[num].total_points);
                    num++;
                    printf("�������Ƿ�Ҫ��������(y)��(n)\n");
                    scanf("%c",&c);
                    if(c=='n'||c=='N')
                        break;
                }while(1);


           }break;
    }
    fclose(fp);
    return num;
}
