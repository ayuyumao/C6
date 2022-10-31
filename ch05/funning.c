#include <stdio.h>
const int S_PER_M = 60; // 1分钟秒数
const int S_PER_H = 3600;   // 1小时秒数
const double M_PER_K = 0.62137; // 1公里秒数

int main(void)
{
    double distk,distm; // 跑过的距离
    double rate;        // 平均速度
    int min,sec;        // 跑步用时（以分钟和秒为单位）
    int time;           // 跑步用时（以秒为单位）
    double mtime;       // 跑1英里需要的时间，以秒为单位
    int mmin,msec;      // 跑1英里需要的时间，以分钟和秒为单位

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers,the distance run.\n");
    scanf("%lf",&distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d",&min);
    printf("Now enter the seconds.\n");
    scanf("%d",&sec);

    time = S_PER_M * min + sec;     // 把时间转换成秒
    distm = M_PER_K * distk;        // 把公里转换成英里
    rate = distm / time * S_PER_H;  // 英里 / 秒 x 秒 / 小时 = 英里 / 小时
    mtime = (double)time / distm;   // 时间 / 距离 = 跑1英里所用的时间
    mmin = (int)mtime / S_PER_M;    // 求分钟数
    msec = (int)mtime % S_PER_M;    // 求出剩余的秒数

    printf("You ran %1.2f km(%1.2f miles) in %d min, %d sec.\n",
            distk,distm,min,sec);
    printf("That pace corresponds to running a mile in %d min, ",
            mmin);
    printf("%d sec.\nYour acerage speed was %1.2f mph.\n",msec,rate);

    return 0;
}