#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    if(a<b){
        cout<<-1;
    }
    else if(a>b){
        cout<<1;
    }
    else if(a==b){
        cout<<0;
    }
    
}
//to convert uppercase to lower case
// lower case starts from 97 and uppercase ends at 92
// for(int i=0;i<s.size();i++){
//     if(s[i] <92){
//         s[i]+=32;
//     }
// }