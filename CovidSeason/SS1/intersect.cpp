#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct point{
    int x,y;
};

int orientation(point p, point q, point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // collinear

    return (val > 0)? 1: 2; // clock or counterclock wise
}
bool onSegment(point p, point q, point r)
{
    return q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
           q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y);

}

bool doIntersect(point p1, point q1, point p2, point q2)
{

    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    if (o1 != o2 && o3 != o4)
        return true;

    if (o1 == 0 && onSegment(p1, p2, q1)) return true;

    if (o2 == 0 && onSegment(p1, q2, q1)) return true;

    if (o3 == 0 && onSegment(p2, p1, q2)) return true;

    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false; // Doesn't fall in any of the above cases
}


int main(){
    //input;
//    freopen("input.txt","r",stdin);
    int n;
    point a,b,c,d;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y>>d.x>>d.y;
        doIntersect(a,b,c,d) ? cout<<"YES" : cout<<"NO";
        cout<<endl;
    }

}