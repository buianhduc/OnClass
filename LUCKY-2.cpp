#include <bits/stdc++.h>
#define llong long long
using namespace std;

const int maxN = 1e5 + 1;
llong a[maxN]; 

int main() {
	int	N;
	llong K;
	fin >> N >> K;	
	for (int i = 0; i < N; ++i) fin >> a[i];
	sort(a, a + N);
	int i1 = 0;
	int i2 = N - 1;
	int j1 = -1;
	int j2 = -1;	
	llong count = 0;	
	while ((i1 < i2)) {
		if (j1 == -1) {
			j1 = i1;
			while (a[j1] == a[i1] && (j1 < i2)) ++j1;
		}
		if (j2 == -1) {
			j2 = i2;
			while (a[j2] == a[i2] && (j2 > i1)) --j2;
		}
		llong count1 = j1 - i1;
		llong count2 = i2 - j2;
		if (a[i1] == a[i2])	{
			if (a[i1] + a[i2] == K) 
			count += count1 * (count1 - 1) / 2;
			break; 
		}
		
		llong sum = abs(a[i1] + a[i2]); 	
		if (sum == K) {
			count += count1 * count2;
			i1 = j1;
			i2 = j2;
			j1 = j2 = -1;
		}
		else if (sum > K) {
			i2 = j2;
			j2 = -1;
		}
		else {
			i1 = j1;
			j1 = -1;
		}
	}	
	cout << count;	
	return 0;
}

