

#include "iostream"
#include "algorithm"

using namespace std;
struct moonCake{
    double storage;
    double total;
    double price;
};
bool cmp(struct moonCake m1,struct moonCake m2){
    return m1.price>m2.price;
}
int main() {
    int N,need;
    cin>>N>>need;
    double sto[N];
    double to[N];
    struct moonCake m[N];
    for (int i = 0; i < N; ++i) {
        cin>>sto[i];
    }
    for (int i = 0; i < N; ++i) {
        cin>>to[i];
    }

    for (int i = 0; i < N; ++i) {
        m[i].total = to[i];
        m[i].storage = sto[i];
        m[i].price = to[i]/sto[i];
    }

    sort(m,m+N, cmp);
    int i = 0;
    double cost = 0;
    while(need!=0){
        if (need<=m[i].storage){
            cost += need*m[i].price;
            need = 0;
        } else{
            cost += m[i].total;
            need -= m[i].storage;
        }
       i++;
        if (i==N){
            break;
        }
    }
    printf("%.2f",cost);
}