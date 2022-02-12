#include<stdio.h>
int main()
{
 int reg;
  char name[30],branch[50],hobbies[50];
 printf("enter name=\n");
  scanf("%s",&name);
  printf("enter branch=\n");
  scanf("%s",&branch);
  printf("enter registration numberr(only last three digits)=\n");
  scanf("%d",&reg);
  printf("enter hobbies=\n");
  scanf("%s",&hobbies);
  printf("Name:%s\n",name);
printf("registration number(only last three digits)=%d\n",reg);
printf("branch:%s\n",branch);
printf("hobbies:%s",hobbies);
  
return 0;
}
