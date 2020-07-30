#include <iostream>
using namespace std;
#define int long long
#define pb push_back
#define mp make_pair

int MAXN = 15000000;
int snt[1300001];

void sang(){
    for(int i = 2; i<=MAXN; i++){
        if(snt[i]==0){
            for(int j = i*i; j<=MAXN; j++){
                snt[j] = i;
            }
        }
    }
}

signed main(){
    sang();
    
}