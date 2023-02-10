

// https://codeforces.com/problemset/problem/1633/A
#include <iostream>
#include <vector>
using namespace std;
// have more explain in notability
int main()
{
    int num, round;
    cin >> round;
    while (round--)
    {
        cin >> num;
        if (num % 7 == 0)
        {
            cout << num << '\n';
        }
        else
        {
            int closest_num = num / 10 * 10 + 7;
            cout << closest_num - closest_num % 7 << '\n';
        }
    }
}