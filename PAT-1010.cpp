
#include "iostream"

using namespace std;

int main() {
    int a, b;
    bool flag = true,isPrint = false;
    while (cin >> a >> b) {
        if (flag == true) {
            if (b != 0) {
                cout << a * b << " " << b - 1;
                isPrint = true;
            }
            flag = false;
        } else {
            if (b != 0) {
                cout << " " << a * b << " " << b - 1;
                isPrint = true;
            }
        }
    }
    if (isPrint== false){
        cout<<"0 0";
    }


}