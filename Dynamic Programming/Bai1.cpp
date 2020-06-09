#include <bits/stdc++.h>
using namespace std;

int vs[1000001], bd[1000001];
int a[1000001];

void qhd(){
    long mid = 0;
    vs[0]=1;
    bd[0]=10;
    for(int i = 1; i<=n; i++){
        for(long j = mid; j>=0; j--){
            if(vs[j]==1 && vs[j+a[i]]==0){
                vs[j+a[i]]=1;
                bd[j+a[i]]=i;
            }
        }
        mid+=a[i];
    }
}
int k, tt[1001];
void 

int main(){

}