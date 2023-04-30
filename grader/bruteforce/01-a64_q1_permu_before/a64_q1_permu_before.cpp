#include <bits/stdc++.h>

using namespace std;
void print(vector<int> &v)
{
    for (auto &e : v)
    {
        cout << e << ' ';
    }
    cout << '\n';
}
void permu(vector<int> &v, int n, int len, vector<int> &used, unordered_map<int, int> &condition)
{
    if (len < n)
    {
        for (size_t i = 0; i < n; i++)
        {
            if (!used[i] and (condition.find(i) == condition.end() or used[condition[i]])) // check ว่า i ตัววนี้ใช้ไปหรือยัง และ check ว่าi ตัวนี้เป็นตัวที่2หรือไม่
            {
                // อธิบาย (condition.find(i) == condition.end() or used[condition[i]])
                // condition เก็บ condition[two] = one; (key คือตัวที่2, value คือตัวที่1)
                // condition.find(i) == condition.end() คือ i ไม่ใช่้ตัวที่ 2
                // used[condition[i]] คือ มีตัวที่ 1 อยู่ แล้ว
                // พอเราเขียน or ไปจะทำให้ ถ้าเรามี 1 อยู่แล้ว และ i เป็นตัวที่ 2 ก็มีสิทธิที่จะใส่เข้าไปได้
                v[len] = i;
                used[i] = true;
                permu(v, n, len + 1, used, condition);
                used[i] = false;
            }
        }
    }
    else
    {
        print(v);
    }
}
int main()
{
    int n, m, one, two;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> used(n);
    unordered_map<int, int> condition;
    while (m--)
    {
        cin >> one >> two;
        condition[two] = one;
    }
    permu(v, n, 0, used, condition);
    return 0;
}