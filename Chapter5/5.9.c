#include <stdio.h>

int main()
{
    double score,sum=0,count=0;
    while(1){
        printf("请输入分数：");
        scanf("%lf",&score);
        if(score<0){
            break;
        }
        sum+=score;
        count++;
    }
    printf("%lf",sum/count);

    return 0;
}
