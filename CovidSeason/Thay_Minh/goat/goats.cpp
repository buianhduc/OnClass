//
// Created by Duc Bui on 2020-08-12.
//
#include <bits/stdc++.h>
using namespace std;

char expected(char c) {
    if (c == '<') return '<';
    return '>';
}

signed main() {
    freopen("GOATS.INP","r",stdin);
    freopen("GOATS.OUT","w",stdout);
    string s;
    int res;
    getline(cin, s);
    res = s.length();
    int a, b;
    a = b = 0;
    for (char c : s) {
        if (c == '<') {
            if (a!=0) {
                a--;
            }
            else {
                b++;
            }
        }
        else a++;
    }
    cout<<a+b;
    return 0;
}