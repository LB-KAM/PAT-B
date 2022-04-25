#include "iostream"
using namespace std;
int main(){
    int n;
    cin >>n;
    int B,S,G;
    B = n/100;
    S = n%100/10;
    G = n%10;
    for (int i = 0; i < B; ++i) {
        cout<<"B";
    }
    for (int i = 0; i < S; ++i) {
        cout<<"S";
    }
    for (int i = 1; i <= G; ++i) {
        cout<<i;
    }
}
