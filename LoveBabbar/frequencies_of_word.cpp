#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
void findfrequency(string s){
    map<string, int>mp;
    stringstream ss(s);
    string word;
    while(ss >> word){
        mp[word]++;
    }
    map<string ,int>::iterator m;
    for(m=mp.begin() ;m!= mp.end();m++){
        cout<<m->first << "->" <<m->second<<endl;

    }
}
int main()
{
    string s = "Geeks For Geeks Ide";
    findfrequency(s);
    return 0;
}