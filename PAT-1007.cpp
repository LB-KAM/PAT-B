/**
 * 本题的注意点在于，对素数的判断，1不是素数，2是素数，所以在判断一个数字是否为素数时只需要判断
 * 该数字能否整除 2~sqrt(N)+1（该区间左右均为闭区间）的任意一数字
 * 为了使时间复杂度降低，可以在判断得到素数时将这些素数push_back到vector中，最后可以得到一个
 * 递增的素数vector 从v[0]-v[num] (mum为不超过N的所有素数的个数)  从第一个到倒数第二个判断
 * 该数Pn和Pn+1的差是否为2，若是，则使count++  最终输出count即可
 */
#include "iostream"
#include "vector"
#include "cmath"
using namespace std;
bool isPrime(int n){
    if (n==1){
        return false;
    } else if (n==2){
        return true;
    }
    for (int i = 2; i <=sqrt(n)+1; ++i) {
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    vector<int> primes;
    int count = 0;
    cin>>n;
    for (int i = 1; i <=n; ++i) {
        if (isPrime(i)== true){
            primes.push_back(i);
        }
    }
    for (int i = 0; i < primes.size()-1; ++i) {
        if (primes[i+1]-primes[i] ==2){
            count++;
        }
    }
    cout<<count;
}