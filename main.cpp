/*
 * Here's a challenge that's a bit more mathematical in nature.
 * Write a program that determines the number of trailing zeros at the end of X! (X factorial),
 * where X is an arbitrary number.
 * For instance, 5! is 120, so it has one trailing zero.
 */

#include <iostream>

using namespace std;

int main()
{
    int num,count5,count2;
    cout<<"\nEnter a number : ";
    cin>>num;
    count5 = -1;
    count2 = 0;
    while(num>0)
    {
        num = num/5;
        count5++;               //count the number of times 5 divides the number
        if(num>0)
        {
            num = num/2;        //count the number of times 2 divides the number
            count2++;
        }
    }
    //together number is divisible by 10 or 5(as 5! == 120)
    cout<<"\nNo. of zeros in factorial are "<<count5+count2;
    return 0;
}