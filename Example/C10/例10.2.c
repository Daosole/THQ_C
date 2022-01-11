// 将上例的文件内容复制到另一个文件
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in, *out;
    char ch, infile[10], outfile[10];
    printf("输入读入文件的名字:");
    scanf("%s", infile);
    printf("输入输出文件的名字:");
    scanf("%s", outfile);
    if ((in = fopen(infile, "r")) == NULL) // 输入文件
    {
        printf("无法打开该文件\n");
        exit(0);
    }
    if ((out = fopen(outfile, "w")) == NULL) // 输出文件
    {
        printf("无法打开该文件\n");
        exit(0);
    }
    while (!feof(in))
    {
        ch = fgetc(in);
        fputc(ch, out);
        putchar(ch);
    }
    putchar(10);
    fclose(in);
    fclose(out);

    return 0;
}