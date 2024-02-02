#include <bits/stdc++.h>
#include<deque>
using namespace std;
int main(){
	int basic[3] ={1,2,3};
	array<int,4> a={1,2,37,4};
	int size=a.size();
	
	cout<<size;
	cout<<a.at(2)<<endl;
	cout<<a.empty()<<endl;
	cout<<a.front()<<endl;
	cout<<a.back()<<endl;
	//vector is dynamic array.doubles it size;
	vector<int> v;
	vector<int> k(5,1);// --> here 5 is the size of the vector and initialises all the elements as 1
	vector<int> copy(k);// a vector copy is created of k
	for(int j:k)
	{
		cout<<j;
	}
	v.push_back(5);
	v.push_back(6);
	v.push_back(56);
	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;
	cout<<v.at(2)<<endl;
	//v.clear() clears the vector
	for(int i:v)
{
	cout<<i<<" ";
}
//deque-elements can be inserted from front and back
deque<int> d;
d.push_back(1);
d.push_front(2);
for(int i: d)
{
	cout<<i<<endl;
}
cout<<"front"<<d.front()<<endl;

//list-cannot acess a particular index.have to travel each element 
list<int> l;
l.push_back(4);
//stack-saadi mai plates ...LIFO
stack<string> s;
s.push("sarnava");
s.push("prasad");
s.push("mohanta");
cout<<s.top()<<endl;
s.pop();
s.size();
s.empty();
//queue-ticket counter FIFO
//same functions as stack  
//priority queue - a type of queue whose first element is greatest
//max heap
priority_queue<int> maxi;
//min_heap
priority_queue<int,vector<int>,greater<int>> mini;
maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);
int n=maxi.size();
for(int p=0;p<n;p++)
{
	cout<<maxi.top()<<" ";
	maxi.pop();
}cout<<endl;
//set-all the elements are unique.implemented using bst in backend;elements are being returned in a sorted order;
 set<int> se;
 se.insert(1);
 se.insert(1);
 se.insert(1);
 se.insert(5);
 se.insert(6);
 se.insert(6);
 se.insert(0);
 for(auto l:se)
 {
	 cout<<l<<endl;
 }
 
}