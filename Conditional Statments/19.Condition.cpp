#include <stdio.h>

int main() 
{
    float bill_amount,surcharge,total_amount;

    printf("Enter the bill amount:"); // Input the bill amount
    scanf("%f",&bill_amount);

    
    if (bill_amount>800) 
	{
        surcharge=bill_amount*0.18;  // 18% surcharge
    } else 
	{
        surcharge=0;
    }

    total_amount=bill_amount+surcharge; //Calculate the totalamount

    if (total_amount<256) 
	{
        total_amount=256;
    }
    printf("Total amount to be paid: Rs. %.2f\n", total_amount);
    // Print the total amount

}
