#include <stdio.h>
#include <string.h>
#include "command.h"
#inclгde "coder.h"

int main(int argc, char *argv[])
{
    // argc - количество аргументов
    // argv - массив указателей на строки
    // Нулевой элемент - командна запуска приложения
    int i;
    for (i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    FILE *stream;
    stream = fopen("bin/points.txt", "r");
        if (stream == NULL) {
        printf("points.txt cannot be opened");
        return 1;
    }
    fclose(stream):

    FILE *binary;
    binary = fopen("bin/units.bin", "rb");
        if (stream == NULL) {
        printf("units.bin cannot be opened");
        return 1;
    }
    fclose(binary);
    
    return 0;
}