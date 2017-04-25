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

    FILE *stream1, *stream2;
    stream1 = fopen("bin/points.txt", "r");
    if (stream1 == NULL) {
        printf("units.bin cannot be opened\n");
        return 1;
    }
    stream2 = fopen("bin/units.bin", "wb");
        if (stream2 == NULL) {
        printf("units.txt cannot be opened\n");
        return 1;
    }
    int k = encode_file("bin/points.txt", "bin/units.bin");
    if (k == 0) {
        printf("Success\n");
    } else {
        printf("Fail\n");
    }
    fclose(stream1);
    fclose(stream2):

    FILE *binary1, *binary2;
    binary1 = fopen("bin/units.bin", "rb");
    if (binary1 == NULL) {
        printf("units.bin cannot be opened\n");
        return 1;
    }
    binary2 = fopen("bin/points.txt", "w");
    if (binary2 == NULL) {
        printf("points.bin cannot be opened\n");
        return 1;
    }
    k = decode_file("bin/units.bin", "bin/points.txt");
    if (k == 0) {
        printf("Success\n");
    } else {
        printf("Fail\n");
    }
    fclose(binary1);
    fclose(binary2);
    
    return 0;
}