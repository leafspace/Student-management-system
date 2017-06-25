#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int sequence; //序号
    char name[48];//姓名
    char sex[16];  //性别
    char student_number[10];//学号ID
    float advanced_mathematics;//高等数学
    float college_english;//大学英语
    float C_language;//C语言
    float computer_introductory_theory;//计算机导论
    float curbstone_score;//非专业的成绩
    float technical_score;//专业的成绩
    float total_score;//总成绩
}Student;
void read(int n);
int main()
{
	FILE *fp;
	fp=fopen("Stud.dat","rb");
	printf("\n\n");
	while(!feof(fp)){
		Student people;
		fread(people.name,48,1,fp);
		fread(people.sex,16,1,fp);
		fread(people.student_number,10,1,fp);
		fread(&people.advanced_mathematics,sizeof(float),1,fp);
		fread(&people.college_english,sizeof(float),1,fp);
		fread(&people.C_language,sizeof(float),1,fp);
		fread(&people.computer_introductory_theory,sizeof(float),1,fp);
		printf("%s %s %s %.0f %.0f %.0f %.0f\n",people.name,people.sex,people.student_number,people.advanced_mathematics,people.college_english,people.C_language,people.computer_introductory_theory);
	}
	return 0;
}
