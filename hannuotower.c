#include<stdio.h>
int count = 0;
void move(int n,char X,char Y,char Z)
{
    if(n == 1)
    {
        printf("%c-->%c\n",X,Z);
        count++;
    }
    else
    {

        move(n-1,X,Z,Y);
        printf("%c-->%c\n",X,Z);
        count++;
        move(n-1,Y,X,Z);
    }
}
int main()
{
    int n;
    printf("print levels:");
    scanf("%d",&n);
    move(n,'X','Y','Z');
    printf("%d",count);

    return 0;
}
