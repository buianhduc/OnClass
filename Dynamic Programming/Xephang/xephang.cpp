#include &amp;lt;iostream&amp;gt;
 
using namespace std;
 
#define REP(i,n) for(int i=0; i&amp;lt;(n); i++)
#define FOR(i,a,b) for(int i=(a); i&amp;lt;=(b); i++)
 
typedef long long LL;
 
int main()
{
    int n;
    cin&amp;gt;&amp;gt;n;
    int F[n+1],t[n+1],r[n];
 
    FOR(i,1,n)
        cin&amp;gt;&amp;gt;t[i];
    FOR(i,1,n-1)
        cin&amp;gt;&amp;gt;r[i];
 
    F[0] = 0;
    F[1] = t[1];
    FOR(i,2,n)
        F[i] = min(F[i-1] + t[i],F[i-2] + r[i-1]);
 
    cout&amp;lt;&amp;lt;F[n]&amp;lt;&amp;lt;endl;
 
    return 0;
}