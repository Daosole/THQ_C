// 有一个磁盘文件，内有一些信息。要求第 1 次将它的内容显示在屏幕上，第 2 次把它复制到另一个文件
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp1, *fp2;
    fp1 = fopen("file1.dat", "r");
    fp2 = fopen("file3.dat", "w");
    while (!feof(fp1))
    {
        putchar(getc(fp1));
    }
    putchar(10);
    rewind(fp1);
    while (!feof(fp1))
    {
        putc(getc(fp1), fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}