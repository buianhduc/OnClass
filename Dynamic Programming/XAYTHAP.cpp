#include <bits/stdc++.h>
using namespace std;
#define int long long
#define st first
#define nd second
#define pb push_back
#define mp make_pair
stack <int> q;
struct kd{
    int x, y, z, tt;
} a[5001];
int x, y, z;
int sl[5001];
int vtri;
int n;
int sh[5001];
int p[5001];
bool ss(kd u, kd v){
    if(u.x == v.x){
        return u.y > v.y;
    }
    return u.x > v.x;
}
signed main(){
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> x >> y >> z;
        if(x<y){
            swap(x,y);
        }
        if(x < z){
            swap(x,z);
        }
        if(y<z){
            swap(y,z);
        }
        a[i].x = x;
        a[i].y = y;
        a[i].z = z;
        a[i].tt = i;
    }
    sort(a+1, a+1+n, ss);
    for(int i = 1; i<=n; i++){
        sh[i] = a[i].z;
    }
    for(int i = 2; i<=n; i++){
        for(int j = 1; j<i; j++){
            if(a[i].x <= a[j].x && a[i].y <= a[j].y && sh[i] < sh[j] + a[i].z){
                sh[i] = sh[j] + a[i].z;
                p[i] = j;
                sl[i] = sl[j] + 1;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i<=n ; i++){
   //     cout << sh[i] << " ";
        if(ans < sh[i]){
            ans = sh[i];
            vtri = i;
        }
    }
    cout << ans << " " << sl[vtri]+1 << endl;
    int tam = vtri;
    for(int i = 1; i<= sl[vtri]+1; i++){
        q.push(tam);
        tam = p[tam];
    }
    while(!q.empty()){
        tam = q.top();
        q.pop();
        cout << a[tam].tt << " " << a[tam].y << " " << a[tam].x << " " <<  a[tam].z << endl;
    }
}
