#include<bits/stdc++.h>
using namespace std;
bool countdigits(int x)
{
    int res=0;
    while(x>0)
    {
        x=x/10;
        res++;
    }
    return res;

}
int main()
{
    int num =789;
    cout<<countdigits(num);
} 