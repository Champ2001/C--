#include<bits/stdc++.h>
using namespace std;
void frequency_of_letters(){
    string s1="geeks for geeks";
    int count[26]={0};
    for(int i=0;i<s1.size();i++){
        count[s1[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i] > 0){
            cout<<char(i+'a')<<" "<<count[i]<<endl;
        }
    }
}

void input_string(){
    string s;
    cout<<"enter your name";
    getline(cin,s);// takes the input from user the whole line Sarnava Mohanta..If we take normal full name as input in cin the while printing it will only print Sarnava and will omit the title...
    cout<<"your name is "<<s;
}

bool isPalindrome(){
    string s;
    string rev = s;
    reverse(rev.begin(),rev.end());
    return(rev == s); 
}

bool isPalindrome(){
    string s;
    int begin=0;
    int end=s.size()-1;
    while(begin < end){
        if(s[begin] != s[end]){
            return false;
            begin++;
            end--;
        }
    }
    return true;
}

bool subsequence_iterative(string s1,string s2,int n,int m){
    if(n<m){
        return false;
    }
    int j=0;
    for(int i=0;i<n && j<m;i++){
        if(s1[i] == s2[j]){
            j++;
        }
    }
    return (j==m);
}

bool subsequence_recursion(string s1,string s2,int n,int m){
    if(m == 0){   // this statement must be written first...
        return true; //if second string's length is finished then its a subsequence...
    }
    if(n==0){
        return false; //if first string has ended
    }
    if(s1[n-1] == s2[m-1]){
        return subsequence_recursion(s1,s2,n-1,m-1);
    }
    else{
        return subsequence_recursion(s1,s2,n-1,m);
    }
}
//Anagram - "abaac" & "aacba" frequencies of each letter is same
bool anagram_naive(string &s1,string &s2){
    int l1=s1.size();
    int l2=s2.size();
    if(l1 != l2){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1 == s2);   
}

bool anagram_eff(string &s1,string &s2){
    const int CHAR=256;
    int l1=s1.size();
    int l2=s2.size();
    if(l1 != l2){
        return false;
    }
    int count[CHAR]={0};
    for(int i=0;i<s1.size();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++){
        if(count[i] != 0){
            return false;
        }
    }
    return true;
}

int  leftMost_element_naive(string &s){
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[i] == s[j]){
                return i;
            }
        }
    }
    return -1;
}

int leftMost_element_better(string &s){
    const int CHAR=256;
    int count[CHAR]={0};
    for(int i=0;i<s.size();i++){
        count[s[i]]++;
    }
    for(int i=0;i<CHAR;i++){
        if(count[i] >1){
            return i;
        }
    }
    return -1;
}

int leftMost_element_efficient(string &s){
    const int CHAR=256;
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=s.size()-1;i>=0;i--){
        if(visited[s[i]]){
            res=i;
        }
        else{
            visited[s[i]] =true;
        }
    }
    return res;
}

int leftmost_Nonrepeating_naive(string &s){
    for(int i=0;i<s.size();i++){
        bool flag;
        for(int j=i+1;j<s.size();j++){
            if(i != j && s[i] == s[j]){
                flag=true;
                break;
            }
        }
        if(flag == false){
            return i;
        }
    }
    return -1;
}

int leftmost_Nonrepeating_better(string &s){
    const int CHAR=256;
    int count[CHAR]={0};
    for(int i=0;i<s.size();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(count[s[i]] ==1){
            return i;
        }
    }
    return -1;
}

int leftmost_Nonrepeating_efficient(string &s){
    const int CHAR=256;
    int count[CHAR];
    fill(count,count+CHAR,-1);
    for(int i=0;i<s.size();i++){
        if(count[s[i]] == -1){
            count[s[i]] =i;
        }
        else{
            count[s[i]]=-2;
        }
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++){
        if(count[i] >= 0){
            res=min(res,count[i]);
        }
    }
    return (res == INT_MAX) ?-1:res;
}

void reverse_a_string(char s[],int low,int high){
    while(low <= high){
        swap(s[low],s[high]);
        low++;
        high--;
    }
}
void reverse_words_in_string(char s[],int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(s[end] == ' '){
            reverse_a_string(s,start,end-1);
            start=end+1;
        }
        reverse_a_string(s,start,n-1);
        reverse_a_string(s,0,n-1);
    }
}
void patternSearching_naive(string &text,string &pattern){
    int m=pattern.size();
    int n=text.size();
    for(int i=0;i<(n-m);i++){
        for(int j=0;j<m;j++){
            if(pattern[j] != text[i+j]){
                break;
            }
            if(j==m){
                cout<<i<<endl;
            }
        }
    }
}

void patternSearching_Improved_naive(string &text,string &pattern){
    int m=pattern.size();
    int n=text.size();
    for(int i=0;i<(n-m);    ){
        for(int j=0;j<m;j++){
            if(pattern[j] != text[i+j]){
                break;
            }
        
        if(j == m){
            cout<< i;
        }
        if(j==0){
            i++;
        }
        else{
            i=(i+j);
        }
    } }
}

void Rabin_Karp_Algorithm(string pattern,string text,int M,int N){
    //Rolling hash function is used for making the elements unique...
    //
    const int q=101;
    #define d 256
    int h=1;
    //compute (d^(M-1))%q
    for(int i=0;i<M-1;i++){
        h=(h*d)%q;
    } 
    //Compute p and To
    int p,t;
    for(int i=0;i<M;i++){
        p=(p*d+pattern[i])%q;
        t=(t*d+pattern[i])%q;
    }
    for(int i=0;i<(N-M);i++){
        //check for hit
        if(p == t){
            bool flag=true;
            for(int j=0;j<M;j++)
                if(text[i+j] != pattern[j]){
                    flag=false;
                    break;
                }
                if(flag == true){
                    cout<<i;
                }
        }
        //Compute ti+1 using ti
        if(i<N-M){
            t=((d*(t-text[i]*h))+text[i+M])%q;
        }
        if(t<0){
            t=t+q;
        }
    }
}

int longestPre_Suffix(string s,int n){
    for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++){
            if(s[i] != s[n-len+i]){
                flag =false;
            }
            if(flag == true){
                return len;
            }
        }
    }
}

bool areRotation(string s1,string s2){
    if(s1.size() != s2.size()) {
        return false;
    }
    return((s1+s2).find(s2) != string::npos);
}

bool areAnagram(string &text,string &pattern,int i){
    const int CHAR=256;
    int count[CHAR]={0};
    for(int j=0;j<pattern.size();j++){
        count[pattern[j]]++;
        count[text[i+j]]--;
    }
    for(int j=0;j<CHAR;j++){
        if(count[j] != 0) {
            return false;
        }
    }
    return true;
}
bool isPresent(string &text,string &pattern){
    int n=text.size();
    int m=pattern.size();
    for(int i=0;i<n-m;i++){
        if(areAnagram(text,pattern,i)){
            return true;
        }
    }
    return false;
}
string reverseEachWord(string input)
{
    int previous=-1;//Such that start starts accordingly
    input+=" ";//adding a space at last so that we can find the last word
    for(int i=0;i<input.size();i++){
        if(input[i]== ' '){
            int start=previous+1;//initially previous is 0,so starts with 0
            int end=i-1;//for word cutting 
            while(start<=end){
                swap(input[start],input[end]);
                start++;
                end--;
            }
            previous=i; // after one word is reversed ,reverse the next word
        }
    }
    return input;
}