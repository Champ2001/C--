#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int num=5;
    cout<<"Factorial ="<<fact(num);
    

}
