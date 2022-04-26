/**
 * 输入格式：
输入第一行给出 3 个正整数，分别为：N（≤105），即考生总数；L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；H（<100），
 为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，
 但排在第一类考生之后；德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，
 但排在第二类考生之后；其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。

随后 N 行，每行给出一位考生的信息，包括：准考证号 德分 才分，其中准考证号为 8 位整数，德才分为区间 [0, 100] 内的整数。数字间以空格分隔。

输出格式：
输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，每行按照输入格式输出一位考生的信息，考生按输入中说明的规则从高到低排序。当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。
 */

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
struct student{
    string id;
    int de;
    int cai;
    int total;
};

bool cmp(student s1,student s2){
    if (s1.total!=s2.total){
        return s1.total>s2.total;
    } else if (s1.de!=s2.de){
        return s1.de>s2.de;
    } else{
        return s1.id<s2.id;
    }
}
int main() {
    int n,l,h;
    cin>>n>>l>>h;
    vector<student> p1,p2,p3,p4;
    vector<vector<student>> v;
    student stus[n];
    for (int i = 0; i < n; ++i) {
        cin>>stus[i].id>>stus[i].de>>stus[i].cai;
        stus[i].total = stus[i].de+stus[i].cai;
        if (stus[i].de<l||stus[i].cai<l){
            continue;
        }
        if (stus[i].de>=h&&stus[i].cai>=h){
            p1.push_back(stus[i]);
        } else if (stus[i].de>=h&&stus[i].cai<h){
            p2.push_back(stus[i]);
        } else if (stus[i].de<h&&stus[i].cai<h&&stus[i].de>=stus[i].cai){
            p3.push_back(stus[i]);
        } else{
            p4.push_back(stus[i]);
        }

    }
    sort(p1.begin(),p1.end(),cmp);
    sort(p2.begin(),p2.end(),cmp);
    sort(p3.begin(),p3.end(),cmp);
    sort(p4.begin(),p4.end(),cmp);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    cout<<p1.size()+p2.size()+p3.size()+p4.size()<<endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            cout<<v[i][j].id<<" "<<v[i][j].de<<" "<<v[i][j].cai<<endl;
        }
    }
}