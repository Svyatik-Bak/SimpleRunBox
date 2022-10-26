#include <stdio.h>
#include <windows.h>

wchar_t wd[255], program[255], args[255];

int wmain(int argc, wchar_t *argv[], wchar_t *argv2[])
{
   if (argc > 1)
   {
	   ShellExecuteW(NULL, L"runas", argv[1], argv[2], NULL, SW_RESTORE);
   }
   if (argc < 2)
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
}
