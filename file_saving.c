#include "head_file.h"
void file_saving(void)
{
    char option;
    char sign;
    system("cls");
    switch(language)
    {
        case '1' :
                  {
                      printf("                                  ѧ���ɼ�����ϵͳ\n");
                      printf("                                                                      ���ԣ�Dack");
	                  printf("================================================================================\n");
                      printf("1.����Ϊ Dat �ļ�.\n");
                      printf("2.����Ϊ Txt �ļ�.\n");
                      printf("3.������һ��˵�.\n");
                      printf("4.�������˵�.\n\n");
                  }
                  break;
        case '2' :
                  {
                      printf("                      Student achievement management system\n");
                      printf("                                                                         By Dack");
	                  printf("================================================================================\n");
                      printf("1.Save for the Dat file\n");
                      printf("2.Save for the Txt file\n");
                      printf("3.Back to a layer of menu.\n");
                      printf("4.Back to the main menu.\n\n");
                  }
                  break;
        case '3' :
                  {
                      printf("                              ��ͽ�γɿ��������ƥ�\n");
                      printf("                                                                      ���ԣ�dack");
	                  printf("================================================================================\n");
                      printf("1.����� Dat �ե�������ä�.\n");
                      printf("2.����� Txt �ե�������ä�.\n");
                      printf("3.���äƤ��Ƥ�һ��Υ�˥�`.\n");
                      printf("4.�ᥤ���˥�`�ˑ���.\n\n");
                  }
                  break;
    }
    do
    {
        switch(language)
        {
            case '1' :
                      {
                          printf("��������� : ");
                      }
                      break;
            case '2' :
                      {
                          printf("Please enter the serial number : ");
                      }
                      break;
            case '3' :
                      {
                          printf("���Ť��������Ƥ������� : ");
                      }
                      break;
        }
        fflush(stdin);
        scanf_s("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'4'){
            switch(language)
            {
                case '1' :
                      {
                          printf("����������������� ?\n");
                          printf("������ Y ���� N : ");
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
                          printf("�`�ä���Τǡ����ʤ����դ��˥ץ������ä��Τ�������\n");
                          printf("Y ���뤤�� N���������Ƥ������� : ");
                      }
                      break;
            }
            scanf_s("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'4');
    fflush(stdin);
    switch(option)
    {
        case '1' : saving_dat(); break;
        case '2' : saving_txt(); break;
        case '3' : according();  break;
        case '4' : main_menu();  break;
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("���뷵�����˵��� ?\n");
                      printf("������ Y ���� N  ");
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
                      printf("���ʤ��ˑ��ꤿ���ᥤ���˥�`���ä��Τ����� ?\n");
                      printf("Y ���뤤�� N ���������Ƥ������� ");
                  }
                  break;
    }
    scanf_s("%c",&sign);
    fflush(stdin);
    if(toupper(sign)!='N'){
        system("cls");
        according();
    }
    else
        file_saving();
}
void saving_dat(void)
{
    FILE *fp;
    List *p;
    int n;
    char file[20]={0};
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ļ��� : ");
                  }
                  break;
        case '2' :
                  {
                      printf("Please enter the file name : ");
                  }
                  break;
        case '3' :
                  {
                      printf("�������Ƥ����������� : ");
                  }
                  break;
    }
    gets_s(file,80);
    if(strstr(file,".dat")==NULL)
        strcat_s(file,80,".dat");
	fp = NULL;
    if((fp=fopen_s(fp,file,"wb"))==NULL){
        switch(language)
        {
            case '1' :
                      {
                          printf("�ļ���ʧ�ܣ��밴�����������һ��˵�.\n");
                      }
                      break;
            case '2' :
                      {
                          printf("File open error! Press any key back to a layer of menu.\n");
                      }
                      break;
            case '3' :
                      {
                          printf("�ե�����򿪤���ʧ�����ʤ�!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                      }
                      break;
        }
        getch();
        file_saving();
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("������ %d ѧ����Ϣ�ڳ����� .\n",student_number);
                      printf("���뱣�������Ϣ ? ");
                  }
                  break;
        case '2' :
                  {
                      printf("Now have %d student in the program .\n",student_number);
                      printf("How many data you want saving ? ");
                  }
                  break;
        case '3' :
                  {
                      printf("���ڤ� %d ѧ���΂������ˡ��־A���Ф� .\n",student_number);
                      printf("������Ǥ��������Ǳ��ܤ���Ƥ��������֤���줿 ? ");
                  }
                  break;
    }
    scanf_s("%d",&n);
    if(n>student_number){
        n=student_number;
        switch(language)
        {
            case '1' :
                      {
                          printf("���ݲ�����ϵͳ������ %d ����.\n",n);
                      }
                      break;
            case '2' :
                      {
                          printf("Data not enough, system will entering %d data.\n",n);
                      }
                      break;
            case '3' :
                      {
                          printf("�ǩ`�������㤷�������ƥब���� %d �v�B�Y�Ϥ�Ѻ������.\n",n);
                      }
                      break;
        }
    }
    p=head->next;
    while(n--){
        fwrite(p->member.name,48,1,fp);
		fwrite(p->member.sex,16,1,fp);
		fwrite(p->member.student_number,10,1,fp);
		fwrite(&p->member.advanced_mathematics,sizeof(float),1,fp);
		fwrite(&p->member.college_english,sizeof(float),1,fp);
		fwrite(&p->member.C_language,sizeof(float),1,fp);
		fwrite(&p->member.computer_introductory_theory,sizeof(float),1,fp);
        p=p->next;
    }
    fclose(fp);
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Saving data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("���楿����ץåȤ��դ��ޤ���!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    file_saving();
}
void saving_txt(void)
{
    FILE *fp;
    List *p;
    int n;
    char file[20]={0};
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ļ��� : ");
                  }
                  break;
        case '2' :
                  {
                      printf("Please enter the file name : ");
                  }
                  break;
        case '3' :
                  {
                      printf("�������Ƥ����������� : ");
                  }
                  break;
    }
    gets_s(file,80);
    if(strstr(file,".txt")==NULL)
        strcat_s(file,80,".txt");
    if((fp=fopen_s(file,80,"w"))==NULL){
        switch(language)
        {
            case '1' :
                      {
                          printf("�ļ���ʧ�ܣ��밴�����������һ��˵�.\n");
                      }
                      break;
            case '2' :
                      {
                          printf("File open error! Press any key back to a layer of menu.\n");
                      }
                      break;
            case '3' :
                      {
                          printf("�ե�����򿪤���ʧ�����ʤ�!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                      }
                      break;
        }
        getch();
        file_saving();
    }
    switch(language)
    {
        case '1' :
                  {
                      printf("������ %d ѧ����Ϣ�ڳ����� .\n",student_number);
                      printf("���뱣�������Ϣ ? ");
                  }
                  break;
        case '2' :
                  {
                      printf("Now have %d student in the program .\n",student_number);
                      printf("How many data you want saving ? ");
                  }
                  break;
        case '3' :
                  {
                      printf("���ڤ� %d ѧ���΂������ˡ��־A���Ф� .\n",student_number);
                      printf("������Ǥ��������Ǳ��ܤ���Ƥ��������֤���줿 ? ");
                  }
                  break;
    }
    scanf_s("%d",&n);
    if(n>student_number){
        n=student_number;
        switch(language)
        {
            case '1' :
                      {
                          printf("���ݲ�����ϵͳ������ %d ����.\n",n);
                      }
                      break;
            case '2' :
                      {
                          printf("Data not enough, system will entering %d data.\n",n);
                      }
                      break;
            case '3' :
                      {
                          printf("�ǩ`�������㤷�������ƥब���� %d �v�B�Y�Ϥ�Ѻ������.\n",n);
                      }
                      break;
        }
    }
    p=head->next;
    fprintf(fp,"Name\tSex\tID\t\tMat\tEng\tC\tThe\tS_cur\tS_tech\tSum\n");
    while(n--){
        fprintf(fp,"%d:",p->member.sequence);
        fprintf(fp,"%s\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t",p->member.name,p->member.sex,p->member.student_number,(p->member.advanced_mathematics),(p->member.college_english),(p->member.C_language),(p->member.computer_introductory_theory));
        fprintf(fp,"%.1f\t%.1f\t%.1f\n",p->member.curbstone_score,p->member.technical_score,p->member.total_score);
        p=p->next;
    }
    fclose(fp);
    switch(language)
    {
        case '1' :
                  {
                      printf("�������ݽ������밴�����������һ��˵�.\n");
                  }
                  break;
        case '2' :
                  {
                      printf("Saving data is over ! Press any key back to a layer of menu.\n");
                  }
                  break;
        case '3' :
                  {
                      printf("���楿����ץåȤ��դ��ޤ���!�ܥ����Ѻ���Ƥ�����������ˑ����һ��Υ�˥�`.\n");
                  }
                  break;
    }
    getch();
    file_saving();
}
