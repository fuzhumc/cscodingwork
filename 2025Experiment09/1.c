#include <stdio.h>

struct student{
    int stunum; //学号
    char name[20]; //姓名
    float examscore; //考试成绩
    float labscore; //实验成绩
    float totalmark; //总评成绩=考试成绩*60%+实验成绩*40%
};

int main()
{
    struct student stutable[10]=
    {
        {71250,"李霞",95,82,0},
        {69753,"李友友",88,86,0},
        {12254,"东方亮",87,88,0},
        {61256,"张男",73,85,0},
        {30258,"孙杰",25,88,0},
        {11260,"柯以乐",82,76,0},
        {33262,"谢涛",91,85,0},
        {29263,"叶林",80,75,0},
        {22483,"陈翔",80,76,0},
        {71525,"王子",71,88,0}
    };
    for(int i=0;i<10;i++)
    {
        stutable[i].totalmark=stutable[i].examscore*0.6+stutable[i].labscore*0.4;
    }
    struct student temp;

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(stutable[i].totalmark<stutable[j].totalmark)
            {
                temp=stutable[i];
                stutable[i]=stutable[j];
                stutable[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d %s %f %f %f\n",stutable[i].stunum,stutable[i].name,stutable[i].examscore,stutable[i].labscore,stutable[i].totalmark);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<10;i++)
    {
        if(stutable[i].totalmark>=a&&stutable[i].totalmark<=b)
        {
            printf("%d %s %f %f %f\n",stutable[i].stunum,stutable[i].name,stutable[i].examscore,stutable[i].labscore,stutable[i].totalmark);
        }
    }
    return 0;
}