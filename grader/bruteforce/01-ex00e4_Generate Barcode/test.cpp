#include <iostream>
#include <string>

using namespace std;

void printBarcode(int ones,int zeros,char *barcode,int idx){
    if(ones == 0 && zeros == 0){
        cout << barcode << endl;
    }
    if(zeros > 0){
        barcode[idx] = '0';
        //cout << ones << zeros-1 << endl;
        printBarcode(ones,zeros-1,barcode,idx+1);
    }
    if(ones > 0){
        barcode[idx] = '1';
        //cout << ones-1 << zeros << endl;
        printBarcode(ones-1,zeros,barcode,idx+1);
    }
}

int main(){
    int ones,total,zeros;
    cin >> ones >> total;
    zeros = total-ones;
    char barcode[total];
    printBarcode(ones,zeros,barcode,0);
}