#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
vector<vector<bool> > in;
bool checkRow(int RowPos){
    for(auto && i : in[RowPos]){
        if(i) return false;
    }
    return true;
}
void PopRow(int RowPos){
    in.erase(in.begin() + RowPos);
}
bool checkColumn(int ColPos){
    for(auto && i : in){
        if(i[ColPos]) return false;
    }
    return true;
}
pair<int,int> check(int row){
    for(int i = 0; i < in.size(); i++){
        if(checkRow(i)) return make_pair(1,i);
    }
    for(int i = 0; i < row; i++){
        if(checkColumn(i)) return make_pair(2,i);
    }
    return make_pair(-1,-1);
}
void PopCol(int ColPos){
    for(auto & i : in){
        i.erase(i.begin() +ColPos);
    }
}

signed main(){
    int row, col, K;
    cin>>row>>col>>K;
    for(int i = 0; i < row; i++){
        vector<bool> temp;
        for(int j = 0; j < col; j++){
            temp.push_back(0);
        }
        in.push_back(temp);
    }
    for(int i = 0; i < K; i++) {
        int a, b;
        cin >> a >> b;
        in[a - 1][b - 1] = 1;
    }

    while(check(row).first != -1){
        for(int i = 0; i < in.size(); i++){
            if(checkColumn(i)){
                PopCol(i);
                col--;
            }
        }
        for(int i = 0; i < row; i++){
            if(checkRow(i)) {
                PopRow(i);
                row--;
            }
        }
    }
    cout<<row*col;
}