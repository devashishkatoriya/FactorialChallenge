
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
        count5++;               
        if(num>0)
        {
            num = num/2;      
            count2++;
        }
    }
    cout<<"\nNo. of zeros in factorial are "<<count5+count2;
    return 0;
}
