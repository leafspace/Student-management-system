#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("Stu.dat","wb");
	fp2=fopen("Stu.txt","w");
	fp3=fopen("student.txt","r");
	srand((unsigned)time(NULL));
	while(!feof(fp3)){
		Student people;
		memset(people.name,0,48);
		memset(people.sex,0,16);
		memset(people.student_number,0,10);
		fscanf(fp3,"%s",people.name);
		fscanf(fp3,"%s",people.sex);
		fscanf(fp3,"%s",people.student_number);

		people.advanced_mathematics=rand()%51+50;
		people.college_english=rand()%51+50;
		people.C_language=rand()%51+50;
		people.computer_introductory_theory=rand()%51+50;
		//curbstone_score=advanced_mathematics+college_english=rand()%51+50;
		//technical_score=college_english+C_language
		//total_score=curbstone_score+technical_score;
		printf("%s %s %s %.0f %.0f %.0f %.0f\n",people.name,people.sex,people.student_number,people.advanced_mathematics,people.college_english,people.C_language,people.computer_introductory_theory);

		fprintf(fp2,"%s\t%s\t%s\t%.0f\t%.0f\t%.0f\t%.0f\n",people.name,people.sex,people.student_number,people.advanced_mathematics,people.college_english,people.C_language,people.computer_introductory_theory);
		fwrite(people.name,48,1,fp1);
		fwrite(people.sex,16,1,fp1);
		fwrite(people.student_number,10,1,fp1);
		fwrite(&people.advanced_mathematics,sizeof(float),1,fp1);
		fwrite(&people.college_english,sizeof(float),1,fp1);
		fwrite(&people.C_language,sizeof(float),1,fp1);
		fwrite(&people.computer_introductory_theory,sizeof(float),1,fp1);
	}


	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	fp1=fopen("Stu.dat","rb");
	printf("\n\n");
	while(!feof(fp1)){
		Student people;
		fread(people.name,48,1,fp1);
		fread(people.sex,16,1,fp1);
		fread(people.student_number,10,1,fp1);
		fread(&people.advanced_mathematics,sizeof(float),1,fp1);
		fread(&people.college_english,sizeof(float),1,fp1);
		fread(&people.C_language,sizeof(float),1,fp1);
		fread(&people.computer_introductory_theory,sizeof(float),1,fp1);
		printf("%s %s %s %.0f %.0f %.0f %.0f\n",people.name,people.sex,people.student_number,people.advanced_mathematics,people.college_english,people.C_language,people.computer_introductory_theory);
	}
	return 0;
}
