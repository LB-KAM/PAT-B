#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
using namespace std;
struct student{
    string name;
    string id;
    int score;
};
bool cmp(student s1,student s2){
    return s1.score<s2.score;
}
int main(){
  int n;
  cin>>n;
  vector<student> vi;
    for (int i = 0; i <n ; ++i) {
        student stu;
        cin>> stu.name >>stu.id >> stu.score;
        vi.push_back(stu);
    }
    sort(vi.begin(),vi.end(), cmp);
    cout << vi[n-1].name<<" "<<vi[n-1].id<<endl;
    cout << vi[0].name<<" "<<vi[0].id<<endl;
    return 0;
}
