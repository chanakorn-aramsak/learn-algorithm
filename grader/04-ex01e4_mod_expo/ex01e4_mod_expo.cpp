#include <iostream>
using namespace std;


int mod_expo(int x, int n, int k){
    if (n==1) return x%k;
    if (n%2==0){
        int tmp = mod_expo(x, n/2, k);
        return (tmp*tmp)%k;
    }else{
        int tmp = mod_expo(x, n/2, k);
        tmp = tmp*tmp;
        return (tmp%k * x%k) %k;
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x, n, k;
    cin >> x >> n >> k;
    cout << mod_expo(x,n,k);
    return 0;
}
