
 //"Success is not a Destination,It's a Journey."

/*********************************************
 **  @Author:  PRASANJIT ROY                **
 **  @Category: Implementation              **
/*********************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num=0;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="X++" || str=="++X")
        {
            num++;
        }
        else num--;

    }

   cout<<num;


	return 0;
}
