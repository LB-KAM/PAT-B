/**
 * 本题注意点    cin读入数据是根据空格或者换行来控制是否结束的
 * 如果要读入一行带空格的字符串的话 可以使用getline(cin,str)
 */

//#include "iostream"
//#include "map"
//using namespace std;
//int game(string str){
//    char ch1 = str[0];
//    char ch2 = str[2];
//    if(ch1=='C'&&ch2=='J'){
//        return -1;
//    } else if (ch1=='B'&&ch2=='C'){
//        return -1;
//    } else if (ch1=='J'&&ch2=='B'){
//        return -1;
//    } else if (ch2=='C'&&ch1=='J'){
//        return 1;
//    } else if (ch2=='B'&&ch1=='C'){
//        return 1;
//    } else if (ch2=='J'&&ch1=='B'){
//        return 1;
//    } else{
//        return 0;
//    }
//}
//    void max(map<char,int> m ){
//        if (m.size()!=0){
//            char maxChar = 'B';
//            char maxVal = m['B'];
//            for (auto item = m.begin();item!=m.end();item++) {
//                if (maxVal <item->second){
//                    maxChar = item->first;
//                    maxVal = item->second;
//                }
//            }
//            for (auto item = m.begin();item!=m.end();item++) {
//                if (item->second==maxVal){
//                    cout<<item->first;
//                    break;
//                }
//            }
//        }
//
//}
//int main() {
//    int balance,aWin,bWin,aLost,bLost;
//    map<char,int> m1,m2;
//    balance = aWin = bWin = aLost = bLost = 0;
//    int n;
//    cin>>n;
//    string temp;
//    for (int i = 0; i < n; ++i) {
//        getline(cin,temp);
//        if (game(temp)==-1){
//            aWin++;
//            m1[temp[0]]++;
//            bLost++;
//        } else if (game(temp)==1){
//            bWin++;
//            m2[temp[2]]++;
//            aLost++;
//        } else{
//            balance++;
//        }
//    }
//    cout<<aWin<<" "<<balance<<" "<<aLost<<endl;
//    cout<<bWin<<" "<<balance<<" "<<bLost<<endl;
//    max(m1);
//    cout<<" ";
//    max(m2);
//    cout<<endl;
//}
#include "iostream"
using namespace std;
int main(){
    char j,y;
    int jWin,yWin;
    int jia[3]={0},yi[3]={0};
    jWin = yWin = 0;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>j>>y;
        if (j=='C'&&y=='J'){
            jia[1]++;
            jWin++;
        } else if (j=='B'&&y=='C'){
            jia[0]++;
            jWin++;
        }else if (j=='J'&&y=='B'){
            jia[2]++;
            jWin++;
        } else if (j=='J'&&y=='C'){
            yi[1]++;
            yWin++;
        } else if (j=='C'&&y=='B'){
            yi[0]++;
            yWin++;
        } else if (j=='B'&&y=='J'){
            yi[2]++;
            yWin++;
        }

    }
    cout<<jWin<<" "<<n-jWin-yWin<<" "<<yWin<<endl;
    cout<<yWin<<" "<<n-jWin-yWin<<" "<<jWin<<endl;
    int maxJ = jia[0]>=jia[1]?0:1;
    maxJ = jia[maxJ]>=jia[2]?maxJ:2;
    int maxY = yi[0]>=yi[1]?0:1;
    maxY = yi[maxY]>=yi[2]?maxY:2;
    string str = "BCJ";
    cout<<str[maxJ]<<" "<<str[maxY];
}