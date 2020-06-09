#include <iostream>
#include <vector>
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

bool largerCheck(int a)
{
    vector<int> number = convertNumberToVector(a);
    for (int i = 0; i < number.size() - 1; ++i)
    {
        if (number[i] > number[i + 1])
            return false;
    }
    return true;
}

bool numcheck(int a)
{
    if (largerCheck(a))
    {
        vector<int> number = convertNumberToVector(a);
        int d = number[1] - number[0];
        for (int i = 1; i < number.size() - 1; ++i)
        {
            if (number[i + 1] - number[i] != d)
                return 0;
        }
        return 1;
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (numcheck(i))
            cout<<i<<" ";
    }
}