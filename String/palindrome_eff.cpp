#include <bits/stdc++.h>
using namespace std;
bool isPal(string s)
{
    int begin=0;
    int end=s.length()-1;
    if(s[begin]!=s[end])
    {
        return false;
    }
    return true;
}
int main()
{
    string a="sas";
    cout<<isPal(a);
}
//every character is being compared atmost once.So ,theta(n) in worst case and 