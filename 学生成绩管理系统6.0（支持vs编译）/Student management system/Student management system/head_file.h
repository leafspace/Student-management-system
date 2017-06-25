#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
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

typedef struct
{
    Student member;
    struct List *next;
}List;

void language_choice(void);
void main_menu(void);
void entry(void);
void according(void);
void expurgate(void);
void sequencing(void);
void file_entering(void);
void file_saving(void);

//¼��˵�
void keyboard_input(void);
//¼���ļ��˵�
void entering_dat(void);
void entering_txt(void);
//������ʾ�˵�
void show_student(void);
//�����ļ��˵�
void saving_dat(void);
void saving_txt(void);
//ɾ���˵�
void del_sequence(void);
void del_id(void);
void del_name(void);

void sequencing_seq(void);
void sequencing_id(void);
void sequencing_sex(void);
void sequencing_initials(void);
void sequencing_unpro(void);
void sequencing_pro(void);
void sequencing_overall(void);

void free_List(void);

void dity(void);
void search(void);
void search_seq(void);
void search_name(void);
void search_id(void);

void modity(List *p);
int student_number;
char language;
List *head;
