#include <stdio.h>
#include <string.h>
#include <command.h>
#inclde "coder.h"

int main(int argc, char *argv[])
{
    // argc - ���������� ����������
    // argv - ������ ���������� �� ������
    // ������� ������� - �������� ������� ����������

    int i;
    for (i = 0; i < argc; ++i) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}