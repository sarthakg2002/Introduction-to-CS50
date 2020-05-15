#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
    float dollars;
    int cents,count=0;
    do
    {
        dollars=get_float("Change owed:");  

    }while(dollars<=0.009);
    cents=round(dollars*100);
    while(cents!=0)
    {
        if(cents>=25)
        {
            count+=cents/25;
            cents=cents%25;
        }
        else if(cents>=10)
        {
            count+=cents/10;
            cents=cents%10;
        }
        else if(cents>=5)
        {
            count+=cents/5;
            cents=cents%5;
        }
        else 
        {
            count+=cents;
            cents=cents%1;
        }
    }
    printf("%i \n",count);
}
