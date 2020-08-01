#include <bits/stdc++.h>
using namespace std;

string findString(string query, vector<string> storage){
    for(string i : storage){
        if(query == i){
            return "yes";
        }
    }
    return "no";
}

vector<string> dictionary(std::vector<string> arr_op)
{
    vector<string> storage, res;
    for(string i : arr_op){
        string a = i.substr(0,4);
        if(a == "find"){
            string query = i.substr(5,i.length()-5);
            res.push_back(findString(query,storage));
        }
        else{
            string query = i.substr(8,i.length()-8);
            storage.push_back(query);
        }
    }
}

int main(){
    string arr[] = {"insert A", "insert T", "insert C", "find G", "find A"};
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    vector<string> queries(arr, arr + n); 
    vector<string> res = dictionary(queries);
    for(string i : res){
        cout<<i<<endl;
    }
}