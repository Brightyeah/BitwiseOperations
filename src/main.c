#include <stdio.h>
#include <string.h>
#include <command.h>
#inclde "coder.h"

int main(int argc, char *argv[])
{
    // argc - количество аргументов
    // argv - массив указателей на строки
    // Нулевой элемент - командна запуска приложения

    int i;
    for (i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}