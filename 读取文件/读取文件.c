#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int sequence; //���
    char name[48];//����
    char sex[16];  //�Ա�
    char student_number[10];//ѧ��ID
    float advanced_mathematics;//�ߵ���ѧ
    float college_english;//��ѧӢ��
    float C_language;//C����
    float computer_introductory_theory;//���������
    float curbstone_score;//��רҵ�ĳɼ�
    float technical_score;//רҵ�ĳɼ�
    float total_score;//�ܳɼ�
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
