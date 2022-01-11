// 从键盘输入一些字符，逐个把它们送到磁盘上去，直到用户输入一个 # 为止
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char ch, filename[10];
    printf("请输入所用的文件名:");
    scanf("%s", filename);
    if ((fp = fopen(filename, "w")) == NULL) // 打开输出文件并使 fp 指向该文件
    {
        printf("无法打开该文件\n");
        exit(0);
    }
    ch = getchar(); // 用来接收最后输入的回车符
    printf("请输入字符 以 # 结束:\n");
    ch = getchar(); // 接收从键盘输入的第一个字符
    while (ch != '#')
    {
        fputc(ch, fp);   // 向磁盘文件输出一个字符
        putchar(ch);    // 将输出的字符显示在屏幕上
        ch = getchar(); // 再接收从键盘输入的一个字符
    }
    fclose(fp);  // 关闭文件
    putchar(10); // 向屏幕输出一个换行符
    return 0;
}