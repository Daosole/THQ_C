#include <stdio.h>

#define N 10                     //row 行
#define M 5                      //column 列
float mark[N][M];                //全局数组
float aver_stu[N], aver_cour[M]; // aver_stu 来存放每个学生的平均成绩 aver_cour 来存放每门课的平均成绩
int r, c;                        // 最高分的行标 r， c 列标
int main(void)
{
    int i, j;
    void input(void);    //输入数据
    void stuAver(void);  //学生平均成绩
    void courAver(void); //课程平均成绩
    float highest(); // 最高分
    float var(void);     // 方差 variance

    input();
    stuAver();
    courAver();

    printf("\n 编号     课程1   课程2   课程3   课程4   课程5   平均分\n");
    for (i = 0; i < N; i++)
    {
        printf("\n NO %2d", i + 1);
        for (j = 0; j < M; j++)
        {
            printf("%8.2f", mark[i][j]);
        }
        printf("%8.2f", aver_stu[i]);
    }
    printf("\n");
//输出课程平均分
    printf("课程平均分:\n");
    for (j = 0; j < M; j++)
    {
        printf("%8.2f", aver_cour[j]);
    }
    printf("\n");
    // 求最高分
    float h;
    h = highest();
    printf("最高分为 %8.2f, NO %2d 课程号 %2d\n", h, r, c);

    printf("方差为 %8.2f\n", var());

    return 0;
}

void input(void) //输入函数
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        printf("\n请输入第 %d 位同学的成绩:\n", i + 1);
        for (j = 0; j < M; j++)
        {
            scanf("%f", &mark[i][j]);
        }
    }
}

void stuAver(void) // 计算平均成绩
{
    int i, j;
    float sum;
    for (i = 0; i < N; i++)
    {
        for (j = 0, sum = 0; j < M; j++) // sum = 0 关键 外层循环一遍 sum 重新赋值
        {
            sum = sum + mark[i][j];
        }
        aver_stu[i] = sum / 5.0; //计算完一行后求平均值
    }
}

void courAver(void) // 课程平均成绩函数
{
    int i, j;
    float sum;
    for (j = 0; j < M; j++)
    {   
        sum = 0;
        for (i = 0; i < N; i++)
        {
            sum = sum + mark[i][j];
        }
        aver_cour[j] = sum / 10.0;
    }
}

float highest()
{
    int i, j;
    float high = mark[0][0];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (mark[i][j] > high)
            {
                high = mark[i][j];
                r = i + 1;
                c = j + 1;
            }
        }
    }

    return high;
}

float var(void)
{
    int i;
    float var, sumx = 0.0, sumxn = 0.0;
    for (i = 0; i < N; i++)
    {
        sumx = sumx + aver_stu[i] * aver_stu[i];
        sumxn = sumxn + aver_stu[i];
    }
    var = sumx / N - (sumxn / N) * (sumxn / N);
    return var;
}