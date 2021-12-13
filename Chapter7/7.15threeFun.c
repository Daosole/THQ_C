#include <stdio.h>
#include <string.h>
#define N 10 //10个员工
int main(void)
{
    void input(int [], char name[][8]); // 输入函数
    void sort(int [], char name[][8]); // 排序函数
    void search(int , int [], char name[][8]); // 搜索函数
    int num[N], n, flag = 1, c; // num 数组用来存放职工号码
    char name[N][8]; // 二维数组存放号码 姓名
    input(num, name);
    sort(num, name);

    printf("\n");
    while (flag == 1)
    {
        printf("input number to look for: ");
        scanf("%d", &n);
        search(n, num, name);
        printf("Continue or not (Y/N): ");
        c = getchar();
        if (c == 'N' || c == 'n')
            flag = 0;
    }

    return 0;

}

void input(int num[], char name[N][8])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("input NO. :");
        scanf("%d", &num[i]); // 得到一个编号 放入 num 数组中
        printf("input name: ");
        getchar();
        gets(name[i]); // 将得到的姓名 存入 数组中
    }
}

void sort(int num[], char name[N][8])
{
    int i, j, min, temp;
    char t[8]; // 存放 姓名的临时字符数组
    for (i = 0; i < N - 1; i++)
    {
        min = i;
        for (j = i; j < N; j++)
        {
            if (num[min] > num[j])
                min = j;
            
            temp = num[i];
            strcpy(t, name[i]); // 将编号对应的姓名存放到临时数组中
            num[i] = num[min];
            strcpy(name[i], name[min]);
            num[min] = temp;
            strcpy(name[min], t);
        }
    }
    printf("\n");
    printf("results is:\n");
    for (i = 0; i < N; i++)
    {
        printf("\n %5d%10s", num[i], name[i]);
    }
}
    
void search(int n, int num[], char name[][8])
{
    int top, bott, mid, loca, sign; // top 数组开头 bott 数组 末尾 mid 中间 sign 控制推出的标志变量
    top = loca = 0;
    bott = N - 1;
    sign = 1;
    if ((n < num[0]) || (n > num[N - 1]))
     loca = -1;

    while (sign == 1 && (top <= bott))
    {
        mid = (top + bott) / 2;
        if (n == num[mid])
        {
            loca = mid;
            printf("NO.  %d, his name is %s.\n", n, name[loca]);
            sign = -1;
        }
        else if (n < num[mid])
            bott = mid - 1;
        else 
            top = mid + 1;
    }
    if (sign == 1 || loca == -1)
        printf("%d not been found. \n");
}