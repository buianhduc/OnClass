#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> convertNumberToVector(int a)
{
    vector<int> result;
    int k = a;
    while (k > 0)
    {
        int temp = k % 10;
        result.push_back(temp);
        k /= 10;
    }
    for (int i = 0; i < result.size() / 2; i++)
    {
        swap(result[i], result[result.size() - 1]);
    }
    return result;
}

bool palindromeCheck(int a){
    vector<int> number = convertNumberToVector(a);
    for(int i=0; i<number.size()/2; i++){
        if(number[i] != number[number.size()-1])
            return 0;
    }
    return 1;
}

int main(){
    int n;
    vector<int> a;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0; i<n; i++){
        a[i]+=1;
        while(!palindromeCheck(a[i])){
            a[i]++;
        }
        cout<<a[i]<<endl;
    }
}