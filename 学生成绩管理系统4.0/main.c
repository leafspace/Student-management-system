#include "head_file.h"
int main()
{
	head=malloc(sizeof(List));
	head->next=NULL;
	language_choice();
    main_menu();
    return 0;
}
