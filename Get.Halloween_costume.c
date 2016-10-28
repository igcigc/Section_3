#include<stdio.h>

char str[100];
int costume=0;

int main(void)
{

srand(time(NULL));

printf("Please tell us what monster scares you the most?\n");
gets(str); 
/*We don't really care cause it's gonna be randomly generated*/
printf("Press enter to choose your fate!\n");
system("pause");
costume=(rand() % 8) + 1;

switch(costume){
CASE 1:
printf("You shall be a WEREWOLF!\n");
break;
CASE 2:
printf("You shall be a VAMPIRE!\n");
break;
CASE 3:
printf("You shall be a MUMMY!\n");
break;
CASE 4:
printf("You shall be a VIKING!\n");
break;
CASE 5:
printf("You shall be a GLADIATOR!\n");
break;
CASE 6:
printf("You shall be a GOAT!\n");
break;
CASE 7:
printf("You shall be a SUPERHERO!\n");
break;
CASE 8:
printf("You shall be a STUDENT AHHHHHHH THE SCARIEST OF THEM ALL!!!\n");
break;
}
return costume;
}

//Gosh I'm sitting in math right now really bored guys...


