#include<stdio.h>
#include<conio.h>
int main()
{
    int d,m,y;
    printf("Enter Date Month and Year in DD/MM/YYYY format : \n");
    scanf("%d%d%d",&d,&m,&y);
    printf("Day - %d ,Month - %d , Year - %d\n",d,m,y);
    getch();
    return 0;
}