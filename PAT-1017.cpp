
#include "iostream"

using namespace std;

int main() {
    string a;
    int b;
    cin>>a;
    cin>>b;
    int remainder = 0;
    bool flag = false;
    if (a.length()==1&&(a[0]-'0')<=b){
        int temp = a[0]-'0';
        cout<<temp/b<<" "<<temp%b;
        return 0;
    }
    for (int i = 0; i < a.length(); ++i) {
        int temp = a[i]-'0';
        remainder = remainder*10+temp;
        if (remainder>b&&remainder%b==0){
            cout<<remainder/b;
            remainder%=b;
            flag = true;
        } else if (flag== true&&remainder/b==0){
            cout<<0;
        } else if (remainder>b&&remainder/b!=0){
            cout<<remainder/b;
            remainder%=b;
            flag = true;
        }
    }
    cout<<" "<<remainder;
    return 0;
}