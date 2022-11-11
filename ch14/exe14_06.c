#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 19

typedef struct
{
    int id;          //球员的编号
    char fname[LEN]; //球员的名;
    char lname[LEN]; //球员的姓;
    int stage_num;   //球员的上场次数;
    int hit_num;     //球员的击中数;
    int base_num;    //球员的走垒数;
    int rbi;         //球员的打点;
    float hit_rate;  //球员的安打率;
} TEAM;

int read_datas(TEAM players[], int n, FILE *fp);
void count_hit_rate(TEAM players[], int n);
void show_messages(TEAM players[], int n);

static TEAM players[LEN]; //全局静态变量中数据已清0;

int main(void)
{
    int len;
    FILE *fp;

    if ((fp = fopen("datas.txt", "r")) == NULL)
    {
        fprintf(stderr, "Can't open file datas.txt.\n");
        exit(EXIT_FAILURE);
    }
    len = read_datas(players, LEN, fp); //统计文件中不同球员的数量;
    count_hit_rate(players, len);
    show_messages(players, len);
    if (fclose(fp) != 0)
    {
        fprintf(stderr, "Can't close file datas.txt.\n");
    }

    return 0;
}

int read_datas(TEAM players[], int n, FILE *fp)
{
    int count = 0;
    float hit_rate;
    char fname[LEN], lname[LEN];
    int m, stage_num, hit_num, base_num, rbi;

    while (7 == fscanf(fp, "%d %18s %18s %d %d %d %d",
                       &m, fname, lname, &stage_num, &hit_num, &base_num, &rbi) &&
           !feof(fp) && count < n)
    {
        if (players[m].stage_num == 0) //球员信息为空则累计球员数量, 防止超出人数限制19人;
        {
            ++count;
        }
        strcpy(players[m].fname, fname);
        strcpy(players[m].lname, lname);
        players[m].id = m;
        players[m].stage_num += stage_num;
        players[m].hit_num += hit_num;
        players[m].base_num += base_num;
        players[m].rbi += rbi;
    }
    return count;
}

void count_hit_rate(TEAM players[], int n)
{
    int i;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            players[i].hit_rate = (float)players[i].hit_num / (float)players[i].stage_num;
            //计算每个运动员的安打率;
        }
    }
    return;
}

void show_messages(TEAM players[], int n)
{
    int i;

    if (0 == n)
    {
        printf("No datas!\n");
    }
    else
    {
        printf("Datas for all players:\n");
        printf("Id   First_name   Last_name   Stage   Hit_rate   Base_num   RBI   Hit_rate\n");
        for (i = 0; i < n; i++)
        {
            printf("%-4d %-12s %-10s %5d %7d %11d %8d %8.2f\n",
                   players[i].id, players[i].fname, players[i].lname,
                   players[i].stage_num, players[i].hit_num, players[i].base_num,
                   players[i].rbi, players[i].hit_rate);
        }
    }
    return;
}