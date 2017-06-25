#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
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

//录入菜单
void keyboard_input(void);
//录入文件菜单
void entering_dat(void);
void entering_txt(void);
//保存显示菜单
void show_student(void);
//保存文件菜单
void saving_dat(void);
void saving_txt(void);
//删除菜单
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
