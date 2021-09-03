/*
    *  
   * * 
  * * *
 * * * *
* * * * *
*/
#include <stdio.h>
int pattern();
int main()
{
    int num;//5
    printf("Enter the number of rows.(Enter odd numbers only)\n>>");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("Numbers are not odd");
    }
    else
    {
        pattern(num);
    }
    return 0;
}

int pattern(int a)
{
    for(int i=0;i<=a;i++)
    {
        for(int k = i;k<=a;k++)
        {
            printf(" ");
            for(int j=1;j<=i-1;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}
