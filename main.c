#include <stdio.h>
#include <windows.h>

char wd[255];
char program[255];
char args[255];

int main()
{
   system("title SimpleRunBox");
   printf("Enter path to the program\n");
   gets(program);
   system("cls");
   printf("Enter what do (for example: open, runas)\n");
   gets(wd);
   system("cls");
   printf("Enter arguments\n");
   gets(args);
   system("cls");
   printf("Summary:\n");
   printf("Program: %s\n", program);
   printf("What do with the program: %s\n", wd);
   printf("Arguments: %s\n", args);
   system("pause");
   ShellExecuteA(NULL, wd, program, args, NULL, SW_RESTORE);
}

