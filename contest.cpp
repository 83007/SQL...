#include<bits/stdc++.h>
using namespace std;
void test(int x)
{
    try
    {
        if(x==1)throw x;
        else if(x==-1)throw 3.4;
        else if(x==0)throw 's';
    }
    catch(int i)
    {
        cout<<"caught an integer...";

    }
    catch(float s)
    {
        cout<<"caught a float..";
    }

    catch(char c)
    {
        cout<<"catch a character..";
    }
}
int main()
{
    test(1);
    test(-1);
    test(0);
}
