#include <iostream>
#include <string>
#include <deque>
#include <queue>
#include <algorithm>
using namespace std;

signed main(){
    string a,b;
    deque<char> s1,s2;
    getline(cin,a);
    getline(cin,b);
    for(int i=0; i<a.size(); i++){
        s1.push_back(a[i]);
        s2.push_back(b[i]);
    }
    while(!a.empty() and a.front()==b.front()){
        s1.pop_front();
        s2.pop_front();
    }
    while(!a.empty() and a.front()==b.front()){
        s1.pop_front();
        s2.pop_front();
    }
    reverse(s1.begin(),s1.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
}