//
// Created by zlb on 2022/2/18.
//
#include "iostream"
#include "vector"
int main(){
    int n,m;
    std::cin>>n>>m;
    int real = m%n;
    std::vector<int> vi;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin>>num;
        vi.push_back(num);
    }
    for (int i = n-real; i <n ; ++i) {
        int num = vi[n-1];
        vi.erase(vi.end()-1);
        vi.insert(vi.begin(),num);
    }
    std::cout<<vi[0];
    for (int i = 1; i < n; ++i) {
        std::cout<<" "<<vi[i];
    }
}