#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <queue>
using namespace std;
#define p pop;

bool isIn(char a, string s){
    
}

int makeChoice(string a, string b, string c)
{
    int count1 = 0, count2 = 0;
    queue<char> q;
    for(char i : a){
        q.push(i);
    }

    while(!q.empty())
    {

    }

}

int main()
{
    string a, b,c;
    getline(cin, a);
    getline(cin,b);
    getline(cin,c);

    if(makeChoice(a,b,c) == 0){
        cout<<solve(a,b,c);
    }
    else if(makeChoice(a,b,c) == 1){
        cout<<"Ambiguous";
    }
    else{
        cout<<"Impossible";
    }
}