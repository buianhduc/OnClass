//
// Created by Duc Bui on 8/20/2020.
//
#include <bits/stdc++.h>
using namespace std;

signed main(){
    int num1 = 0,k,res = 0;
    string s;
    cin>>k;
    cin.ignore();
    getline(cin,s);
    int l,r;
   for(l = 0; l < s.length(); l++){
       for(r = l; r < s.length(); r++){
           num1 = 0;
           for(auto& c :s.substr(l,abs(l-r)+1)){
               if(c == '1') num1++;
           }
           if(num1 == k) res++;
       }
   }
    cout<<res;
}

