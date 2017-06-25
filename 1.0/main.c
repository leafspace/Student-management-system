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
	/*界面系统*/
	char ch;
	int student_num=0;
	struct Student * p=student;
	printf("                                 学生成绩管理系统\n");
	printf("================================================================================\n");
	do
	{
	    printf("1.录入学生成绩\n");
	    printf("2.显示学生成绩\n");
	    printf("3.添加学生成绩\n");
	    printf("4.删除学生成绩\n");
	    printf("5.排序学生成绩\n");
	    printf("6.结束操作\n");
	    printf("================================================================================\n");
		do{
			scanf("%c", &ch);
			if (ch<'1' || ch>'6')
				printf("输入错误，请重输！\n");
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
    printf("1.从原存的文件中读取数据\n");
    printf("2.从键盘输入一组数据（注：可能会删除原来存储的数据）\n");
    scanf("%c",&c);
    printf("test !");
    switch(c)
    {
    /*if(ch=='1')
    {
        while(文件结束函数标志){
            对文件进行读取

        }
    }*/
        case '2':
            {
                do
                {
                    printf("请输入学生学号(以换行结束)：");
                    gets(student[num].id);
                    printf("\n请输入学生姓名(以换行结束):");
                    gets(student[num].name);
                    printf("\n请输入学生班级(限制四位数):");
                    scanf("%d",&student[num].class);
                    printf("\n请输入学生性别(请用boy或girl来表示):");
                    gets(student[num].sex);
                    printf("\n请输入学生四门功课的分数：\n");
                    printf("数学：");scanf("%d",&student[num].score[0]);
                    printf("语文：");scanf("%d",&student[num].score[1]);
                    printf("英语：");scanf("%d",&student[num].score[2]);
                    printf("专业：");scanf("%d",&student[num].score[3]);
                    for(i=0;i<4;i++)
                        student[num].total_points+=student[num].score[i];
                    printf("\n%s的功课总分为d",student[num].name,student[num].total_points);
                    num++;
                    printf("请问您是否要继续？是(y)否(n)\n");
                    scanf("%c",&c);
                    if(c=='n'||c=='N')
                        break;
                }while(1);


           }break;
    }
    fclose(fp);
    return num;
}
