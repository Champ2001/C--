#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    while(x==0)
    {
        return 1;
    }
    return x*fact(x-1);
}
int main()
{
    int num=5;
    cout<<fact(num);
    
}