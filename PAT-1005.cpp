
#include "iostream"
#include "map"
#include "algorithm"
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    map<int,bool> mp;
    int temp;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        mp[a[i]]= true;
    }
    for (int i = 0; i <n ; ++i) {
        temp = a[i];
        if (mp[temp]== false){
            continue;
        } else{
            while (temp!=1){
                if (temp%2==0){
                    temp/=2;
                    mp[temp] = false;
                } else{
                    temp = (3*temp+1)/2;
                    mp[temp] = false;
                }
            }
        }
    }
    sort(a,a+n,cmp);
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (mp[a[i]]== true){
            if (cnt==0){
                cout<<a[i];
                cnt++;
            } else{
                cout<<" "<<a[i];
            }
        }
    }
    cout<<endl;
}