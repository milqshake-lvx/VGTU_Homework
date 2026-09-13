#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, ".UTF8");
    puts("Выполнил: Лавлинский А.Е.");
    puts(
        "         ____\n"
        "        | || |         \n"
        "  ______\\____/______________\n"
        "  \\                       / \n"
        "   \\ ____________________/ \n"
        "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    getchar();
    return 0;
}