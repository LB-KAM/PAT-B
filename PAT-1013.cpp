#include "iostream"
#include "cmath"
using namespace std;
bool prime(int n){
        if (n==1){
            return false;
        }
        else if(n==2){
            return true;
        }
        else if(n>2){
            int limit = sqrt(n)+1;
            for (int i = 2; i <= limit; ++i) {
                if (n%i==0){
                    return false;
                }
            }
            return true;
        }

    }
    int primeN(int n){
    int count=0;
    int i;
    for(i=2;count!=n;i++){
        if (prime(i))
            count++;
    }
    return i-1;

}
int main(){
    int m,n;
    cin>>m>>n;
    int count =0;
    bool flag = false;
    int primeM = primeN(m);
    cout<<primeM;
    count++;
    primeM++;
    while(count!=n-m+1){
        if (prime(primeM)){
            if (flag){
                cout<<primeM;
                flag = false;
            } else{
                cout<<" "<<primeM;
            }
            count++;
            if(count>0&&count%10==0){
                cout<<endl;
                flag = true;
            }
        }
        primeM++;
    }

}