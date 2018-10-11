/*     " Simple Automatic Food Machine "
         (Simple_&_Easy_for_Beginners)
       
      * Code By  : S011T Hacker 
      * Facebook : www.fb.com/sumit.ther.1

         >> COPYRIGHT FREE LICENSE <<
         
                                                */
#include<stdio.h>
#include<conio.h>
int a,f;
char name[10];

void main()
{
clrscr();
printf("*** Please Enter your Name ***\n");
scanf("%s",&name);
str1:
clrscr();
printf("> Hello %s...\n\n\n",name);
printf(":: What do you want ::\n\n1.Icecream\n2.Chocolate\n(enter your choise)\n");
scanf("%d",&a); switch(a)
{
default:
printf("Wrong Option\n");
getch(); goto str1;

case 1:
ice:
clrscr();
int f1;
printf("*** ICE CREAM ***\n\n\n:: Which Ice Cream Flavour do You Like? ::\n\n1.Pineapple\n2.Strawberry\n\n");
scanf("%d",&f1); switch(f1)
{
default:
printf("Wrong Option\n");
getch(); goto ice;

case 1:
printf("\nGive Rs.10 & press ENTER");
getch(); goto thanks;

case 2:
printf("\nGive Rs.20 & press ENTER");
getch(); goto thanks;
}

case 2:
cho:
clrscr();
int f2;
printf("*** CHOCOLATE ***\n\n\n:: Which Chocolate do you Like? ::\n\n1.Five Star\n2.Dairy Milk\n\n");
scanf("%d",&f2); switch(f2)
{
default:
printf("Wrong Option \n");
getch(); goto cho;

case 1:
printf("\nGive Rs.5 & press ENTER");
getch(); goto thanks;
case 2:
printf("\nGive Rs.10 & press ENTER");
getch(); goto thanks;
}

thanks:
printf("\nThank You For Using Food Machine...!!\n");
getch();
}
}
