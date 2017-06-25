#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "head_file.h"
int main()
{
	head=malloc(sizeof(List));
	head->next=NULL;
    main_menu();
    return 0;
}
