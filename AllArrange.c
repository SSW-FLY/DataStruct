#include<stdio.h>
int count = 0;
int  paixu(int sql[],int m,int n)
{

    int temp,i,j;
    if(m == n)
    {
        count++;
        for(i=0; i<3; i++)
        {
            printf("%d\t",sql[i]);
        }
        printf("\n");
        printf("\n");
        return sql[m];
        //printf("OK1");

    }
    else
    {
        for(i=0; i<=n-m; i++)
        {
            temp = sql[m];
            //printf("temp");
            sql[m] = sql[m+i];
            sql[m+i] = temp;
            paixu(sql,m+1,n);
            temp = sql[m];
            sql[m] = sql[m+i];
            sql[m+i] = temp;
        }
    }
}


int main()
{
    int sql[3] = {1,2,3};
    int i ;

    paixu(sql,0,2);

    printf("%d",count);
    return 0;
}
