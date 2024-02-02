#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m;
    m.insert({10,200});
    m[5]=100;
    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<"Size: "<<m.size()<<endl;
    m.at(10)=300;
    map<int,int> k;
    k.insert({1,120});
    k[2]=230;
    k.insert({3,400});
    for(auto it=k.begin();it != k.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    k.clear();
    cout<<"Size "<<k.size()<<endl;
    cout<<"Empty : "<<(k.empty()?"Yes":"NO")<<endl;
    map<int,string> s;
    s.insert({1,"sarnava"});
    s.insert({2,"gfg"});
    s.insert({3,"NOob"});
    if(s.find(3)==s.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    auto it=s.lower_bound(3);
    if(it!= s.end()){
        cout<<(*it).second;
    }
    else{
        cout<<"No other greater value";
    }
    map<int,string> l;
	l.insert({5,"gfg"});
	l.insert({2,"ide"});
	l.insert({1,"practice"});

	auto ite=l.upper_bound(2);
	if(ite!=l.end())
	    cout<<(*it).first<<endl;
	else
	    cout<<"Greater Value"<<endl;
	    
	l.erase(5);
	cout<<"Size: "<<l.size()<<endl;
	
	l.erase(l.find(2),l.end());
	cout<<"Size: "<<l.size()<<endl;
	
}