#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[]="gfg";
    cout<<s<<endl;
    cout<<sizeof(s)<<endl;
    char s4[]={'g','f','g'};
    char s3[]={'g','f','g','\0'};
    cout<<s4<<endl;
    cout<<s3;
    char s1[] = "gfg";
    char s2[] = "bcd";
    int res = strcmp(s1, s2);
    if (res > 0)
        cout << "Greater";
    else if(res == 0)
        cout << "Same";
    else
        cout << "Smaller";
}