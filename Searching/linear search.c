#include<stdio.h>
int main()
{
    int num,i,item;
    int flag = 0;
    printf("How many numbers? Ans= ");
    scanf("%d",&num);
    int ara[num];
    for(i=0; i<num; i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("Enter searching number: ");
    scanf("%d",&item);

    for(i=0; i<num; i++)
    {
        if(ara[i]==item)
            flag = 1;
    }
    if(flag)
        printf("YES,THIS NUMBER IS FOUND\n");
    else
        printf("THIS NUMBER IS NOT FOUND\n");
    return 0;
}
