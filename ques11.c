#include<stdio.h>
#include<conio.h>
int main()
{
    int H,M;
    printf("Enter Hour and Minute in HH:MM Format\n");
    scanf("%d:%d",&H,&M);
    printf("%d hour and %d minute",H,M);
    getch();
    return 0;
}