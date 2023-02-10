// https://codeforces.com/problemset/problem/271/A
#include <iostream>
#include <vector>
using namespace std;
bool is_distinct(int num)
{
    vector<bool> found(10);
    while (num > 0)
    {
        if (found[num % 10])
            return false;
        found[num % 10] = true;
        num /= 10;
    }
    return true;
}
int main()
{
    int y;
    std::cin >> y;
    y++;
    while (!is_distinct(y))
    {
        y++;
    }
    cout << y;
}
