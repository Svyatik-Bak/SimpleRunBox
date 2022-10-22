#include <stdio.h>
#include <locale.h>
#include <windows.h>

char wd[255], program[255], args[255];


int wmain()
{
   system("title SimpleRunBox");
   wprintf(L"Enter path to the program\n");
   _getws(program);
   system("cls");
   wprintf(L"Enter what do (for example: open, runas)\n");
   _getws(wd);
   system("cls");
   wprintf(L"Enter arguments\n");
   _getws(args);
   system("cls");
   wprintf(L"Summary:\n");
   wprintf(L"Program: %ls\n", program);
   wprintf(L"What do with the program: %ls\n", wd);
   wprintf(L"Arguments: %ls\n", args);
   system("pause");
   ShellExecuteW(NULL, wd, program, args, NULL, SW_RESTORE);
}
