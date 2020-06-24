#include<iostream>
#include<vector>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
	long long t,p;
	long long a[1001];
	long long f[1001][10001];

	freopen("CH.INP","r",stdin);
	freopen("CH.OUT","w",stdout);
	cin>>t;
	cin>>p;
	for(int m = 1; m <= t; m++){
		cin>>a[m];
	}
	for(int m = 0; m <= t; m++){
		f[m][0]=0;
	}
	for(int m = 0; m <= p; m++){
		f[0][m]=0;
	}
	for(int m = 1; m <= t; m++){
		for(int k = 1; k <= p; k++){
			f[m][k] = f[m-1][k];
			if(k >= a[m]){
				f[m][k]= max(f[m-1][k] , f[m-1][k-a[m]] + a[m]);
			}
		}
	}
	cout<<f[t][p];
}
