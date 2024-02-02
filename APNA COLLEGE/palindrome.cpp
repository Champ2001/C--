#include<bits/stdc++.h>
using namespace std;
int palindrome(int x)
{
    int rev;
    int temp=x;
    while(x>0)
    {
        int res=x%10;
        rev=rev*10+res;
        x=x/10;
    }
    return rev==x;

}
int main()
{
    int num=121;
    cout<<bool(palindrome);

}