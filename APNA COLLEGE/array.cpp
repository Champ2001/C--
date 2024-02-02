#include<bits/stdc++.h>
using namespace std;
int countOccurences(char *str)
{
    char *p;
    vector<string> a;
    p=strtok(str," ");
    while(p!= NULL){
        a.push_back(p);
        p=strtok(NULL," ");
    }
    int c=0;
    for(int i=0;i<a.size();i++){
        if(a[i]== "JAVA"){
            c++;
        }
    }
    return c;
}
int main(){
    char str[8];
    cin>>str;
    cout<<"JAVA Lecture is repeating "<<countOccurences(str)<<" times";
}