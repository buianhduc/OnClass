#include <iostream>
#include <math.h>
using namespace std;

bool prime_check(int a){
    if(a<2){
        return false;
    }
    else if(a>2){
        for(int i=2; i<=sqrt(a); i++){
            if(a%i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int a,b;
        cin>>a>>b;
        for(int j = a; j<=b; j++){
            if(prime_check(j)){
                cout<<j<<' ';
            }
        }
        cout<<endl;
    }
}