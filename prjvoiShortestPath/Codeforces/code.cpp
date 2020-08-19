#include <bits/stdc++.h>
using namespace std;


signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool check = false;
        int temp,count = 1;
        cin>>temp;
        n--;
        while(n--){
            int temp2;
            cin>>temp2;
            if(temp2 != temp){
                check = true;
            }
            count++;
        }
        if(check){
            cout<<"1"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
}
