#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int m,n,count = 0;
    cin>>n>>m;
    vector<string> input;
    for(int i = 0; i < n; i++){
        string temp;
        cin>>temp;
        input.push_back(temp);
    }

    for(int i = 0; i < m-1; i++){
      if(input[n-1][i] == 'D') count++;
    }
    for(int i = 0; i < n-1; i++){
      if(input[i][m-1] == 'R') count++;
    }
    cout<<count<<endl;
  }
}

