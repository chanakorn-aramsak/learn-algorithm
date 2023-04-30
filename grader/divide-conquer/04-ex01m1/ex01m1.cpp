#include "bits/stdc++.h"
using namespace std;

void tiling(int l, int x, int y, int xs, int ys, int xe, int ye)
{
    if (l==2){
        if (x==xs and y==ys){
            cout << "0" << xs << ys << '\n';
        }else if (x==xe and y==ys){
            cout << '1' << xs << ys << '\n';
        }else if (x==xs and y==ye){
            cout << '2' << xs << ys << '\n';
        }else {
            cout << '3' << xs << ys << '\n';
        }
    }else {
        int xm = (xs+xe)/2;
        int ym = (ys+ye)/2;
        
    }

}
int main()
{
}
