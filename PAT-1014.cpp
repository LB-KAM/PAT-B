
#include "iostream"
#include "string"
using namespace std;

int main() {
    string strs[4];
    string days[7]={"MON ","TUE ","WED ","THU ","FRI ","SAT ","SUN "};

    for (int i = 0; i < 4; ++i) {
        cin>>strs[i];
    }
    int i;
    i = 0;
    while (i<strs[0].length()&&i<strs[1].length()){
        if (strs[0][i]==strs[1][i]&& strs[0][i]>='A'&&strs[0][i]<='G'){//非常离谱   如果没有加上判断字符是否在A-G 即代表星期一到星期日的大写字母，PAT判题系统中会出现运行时错误，或者超时的问题
            break;
        }
        i++;
    }
    char ch = strs[0][i];
    string day = days[ch-'A'];
    i+=1;
    while (i<strs[0].length()&&i<strs[1].length()){
        if (strs[0][i]==strs[1][i]&&((strs[0][i]>='0'&&strs[0][i]<='9')||(strs[0][i]<='N'&&strs[0][i]>='A'))){
            ch = strs[0][i];
            break;
        }
        i++;
    }
    int hour = isalpha(ch)?ch-'A'+10:ch-'0';
    i = 0;
    while (i<strs[2].length()&&i<strs[3].length()){
        if (strs[2][i]==strs[3][i]&& isalpha(strs[2][i])){
            break;
        }
        i++;
    }
    cout<<day;
    printf("%02d:%02d",hour,i);
}