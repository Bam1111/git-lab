#include<stdio.h>
#include<string.h>

int main(void)
{
char name[50];

printf("Enter your name: ");
if(!fgets(name,sizeof(name),stdin))
{
printf("Error Input!!! \n");
return 1;
}

name[strcspn (name, "n")] = '\0';
printf("Hello, %s  !!Welcome to Git.\n",name);
return 0;
}
