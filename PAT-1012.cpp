/**
 * 题不是难  是坑
 * 分类之后不存在数字 即满足条件ai的数字个数为0  由于a1-a5中除了a2为会产生结果0 其余均只需判断存储在ai中的只是否
 * 为0就能判断其数字个数是否为0
 * 一开始测试点8被卡  原因就在于 一开始直接判断a2是否为零以断定符合a2条件的数字个数为0
 */
#include "iostream"
using namespace std;
void res(int n){
    if (n==0)
        printf("N");
    else
        printf("%d",n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int a1,a2,a3,a5;
    int flag = 1;
    a1=a2=a3=a5=0;
    double a4 = 0;
    int a2size = 0,a4size = 0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]%5==0&&a[i]%2==0){
            a1+=a[i];
        }
        else if(a[i]%5==1){
            a2size++;
            a2 = a2+flag*a[i];
            flag *= -1;
        }
        else if (a[i]%5==2){
            a3++;
        }
        else if (a[i]%5==3){
            a4size++;
            a4 += a[i];
        }
        else if(a[i]%5==4){
            if (a[i]>a5){
                a5 = a[i];
            }
        }
    }
    res(a1);
    printf(" ");
    if (a2size==0){
        printf("N ");
    } else{
        printf("%d ",a2);
    }
    res(a3);
    printf(" ");
    if (a4!=0){
        a4/=a4size;
        printf("%.1f",a4);
    } else{
        printf("N");
    }
    printf(" ");
    res(a5);
    return 0;
}