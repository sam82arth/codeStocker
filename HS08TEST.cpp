#include <stdio.h>

int main(void) 
{
    int wd_value;
    float bank_amount; 
    scanf("%i %f",&wd_value , &bank_amount);

    if(wd_value>0&&wd_value<=2000&&bank_amount>0&&bank_amount<=2000)
    {
        
        float a = (bank_amount - wd_value) - 0.5;
        if( (wd_value % 5 == 0 )&& (wd_value < bank_amount-0.5 ))
        {
            printf("%0.2f", a);
        }
        else
        {
            printf("%0.2f",bank_amount);
        }
        
        
        
    }
        
    

	return 0;
}

