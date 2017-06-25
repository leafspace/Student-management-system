#include <stdio.h>
#include <stdlib.h>
#include "head_file.h"
void main_menu(void)
{
    char option;
    char sign;
    system("cls");
    printf("                      Student achievement management system\n");
    printf("                                                                         By Dack");
	printf("================================================================================\n");
    printf("1.School student achievement\n");
    printf("2.According to the existing student achievement\n");
    printf("3.Delete student achievement\n");
    printf("4.Sort student achievement\n");
    printf("5.End of operation\n\n");
    do
    {
        printf("Please enter the serial number : ");
        scanf("%1c",&option);
        fflush(stdin);
        if(option<'1'||option>'5'){
            printf("Error! Do you want finish the program?\n");
            printf("Please enter the Y or N : ");
            scanf("%c",&sign);
            if(toupper(sign)!='N')
                exit(0);
        }
    }while(option<'1'||option>'5');
    fflush(stdin);
    switch(option)
    {
        case '1' : entry();       break;
        case '2' : according();   break;
        case '3' : expurgate();   break;
        case '4' : sequencing();  break;
        case '5' : exit(0);       break;
    }
}
