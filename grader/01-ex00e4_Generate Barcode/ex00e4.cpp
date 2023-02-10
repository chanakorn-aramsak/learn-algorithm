#include <bits/stdc++.h>

using namespace std;

void gen_barcode(vector<int> &v, int k, int n, int chosen, int len)
{
    if (len < n)
    {
        if (len - chosen < n - k) // len = ความยาวปัจจุบัน, chosen คือจำนวน 1 ที่เลือกไปแล้ว ,n คือตัวเลขทั้งหมด ,k คือความยาวที่ต้องเลือก
        {

            v[len] = 0;
            gen_barcode(v, k, n, chosen, len + 1);
        }
        if (chosen < k)
        {
            v[len] = 1;
            gen_barcode(v, k, n, chosen + 1, len + 1);
        }
    }
    else
    {
        for (auto &e : v)
        {
            cout << e;
        }
        cout << '\n';
    }
}

int main()
{
    int A, B;
    cin >> A >> B;
    vector<int> v(B);
    gen_barcode(v, A, B, 0, 0);
}