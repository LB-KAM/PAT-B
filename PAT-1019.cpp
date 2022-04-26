#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;
//int num(vector<int> v){
//    int sum = 0;
//    for (auto item = v.begin();item!=v.end();item++){
//        sum = sum*10+*(item);
//    }
//    return sum;
//}
//bool cmp1(int a,int b){
//    return a>=b;
//}
//bool cmp2(int a,int b){
//    return a<=b;
//}
//int notAsc(string str){
//    vector<int> v;
//    for (int i = 0; i < str.length(); ++i) {
//        v.push_back(str[i]-'0');
//    }
//    sort(v.begin(),v.end(),cmp1);
//    return num(v);
//}
//int notDesc(string str){
//    vector<int> v;
//    for (int i = 0; i < str.length(); ++i) {
//        v.push_back(str[i]-'0');
//    }
//    sort(v.begin(),v.end(), cmp2);
//    return num(v);
//}
//int main() {
//    string a;
//    cin>>a;
//    int big = notAsc(a);
//    int small = notDesc(a);
//    int result = big-small;
//    if (notAsc(a) == notDesc(a)){
//        printf("%d - %d = %s",big,small,"0000");
//    } else{
//        string bigStr = big>1000?to_string(big):"0"+to_string(big);
//        string smallStr = small>1000? to_string(small):"0"+ to_string(small);
//        cout<<bigStr<<" - "<<smallStr<<" = "<<result<<endl;
//        while (result != 6174){
//            string temp = to_string(result);
//            big = notAsc(temp);
//            small = notDesc(temp);
//            result = big - small;
//            string bigStr = big>1000?to_string(big):"0"+to_string(big);
//            string smallStr = small>1000? to_string(small):"0"+ to_string(small);
//            cout<<bigStr<<" - "<<smallStr<<" = "<<result<<endl;
//            if (result==0){
//                break;
//            }
//        }
//    }
//
//}
bool cmp(char a,char b){
    return a>b;
}
int main(){
    string str;
    cin>>str;
    str.insert(0,4-str.length(),'0');
    do {
        sort(str.begin(),str.end(),cmp);
        str.insert(0,4-str.length(),'0');
        cout<<str<<" - ";
        int big = stoi(str);
        sort(str.begin(),str.end());
        str.insert(0,4-str.length(),'0');
        cout<<str<<" = ";
        int small = stoi(str);
        int result = big-small;
        string res = to_string(result);
        res.insert(0,4-res.length(),'0');
        cout<<res<<endl;
        str = to_string(result);
        str.insert(0,4-str.length(),'0');
    } while (str!="6174"&&str!="0000");
}