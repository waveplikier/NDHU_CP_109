#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int num1,num2,num3;
    int hold, output;
    int small= -1;
    int i = 1;

    while(cin >> num1 >> num2 >> num3)

    {
        for(int i=1; i<=num3;i++)
        {

        if((num1%i == 0) && (num2 %i==0) && (num3%i==0))
        {
            hold = i;
            if(hold > small)
            {
                output = hold;
            }
        }
        }
    cout << output<<endl;
    }

    return 0;
}
