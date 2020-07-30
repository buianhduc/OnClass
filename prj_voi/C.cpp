#include <iostream>
#include <string>
#include <vector>

using namespace std;



string solve(string s){
    vector<vector<string> > result;
    int count = 0;int i = 8;
    while(i < s.length()){
        if(s[i] == '='){
            string temp;
            count++;
            int end;
            for(int j = 0; j < count; j++){
                if(s[j] == '}')
                {
                    end = j;
                    break;
                }
                else{
                    temp += s[j];
                }
            }
            result[count].push_back(temp); 
        }
        
    }
}

int main(){
    string s;
    getline(cin,s);
    cout<<solve(s);
}


