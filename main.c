#include <stdio.h>
#include <windows.h>

int wmain(int argc, wchar_t **argv, wchar_t **argv2)
{
   if (argc > 1)
   {
	   ShellExecuteW(NULL, L"runas", argv[1], argv[2], NULL, SW_SHOW);
   }
   else
   {
   system("title SimpleRunBox"); wchar_t wd[255], program[255], args[255];
   wprintf(L"Enter path to the program\n");
   _getws(program);
   system("cls");
   wprintf(L"Enter operation (default is open)\n");
   _getws(wd);
   system("cls");
   wprintf(L"Enter arguments\n");
   _getws(args);
   system("cls");
   wprintf(L"Summary:\nProgram: %ls\nWhat do with the program: %ls\nArguments: %ls\n", program, wd, args);
   wprintf(L"\nPress any key if everything seems right"); getchar();
   ShellExecuteW(NULL, wd, program, args, NULL, SW_SHOW);
   return 0;
   }
}
