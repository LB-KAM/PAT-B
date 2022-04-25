
#include "iostream"
#include "string"
#include "stack"

int main(){
    std::string str;
    int sum = 0;
    std::getline(std::cin,str);
    for (int i = 0; i < str.size(); ++i) {
        sum = sum + str[i]-'0';
    }
    std::stack<int> stk;
    while(sum!=0){
        stk.push(sum%10);
        sum/=10;
    }
    bool flag = true;
    while(stk.empty()== false){
        if(flag== true){
            flag = false;
        }
        else{
            std::cout<<" ";
        }
        switch (stk.top()) {
            case 0:{
                std::cout<<"ling";
                stk.pop();
                break;
            }
            case 1:{
                std::cout<<"yi";
                stk.pop();
                break;
            }
            case 2:{
                std::cout<<"er";
                stk.pop();
                break;
            }
            case 3:{
                std::cout<<"san";
                stk.pop();
                break;
            }
            case 4:{
                std::cout<<"si";
                stk.pop();
                break;
            }
            case 5:{
                std::cout<<"wu";
                stk.pop();
                break;
            }
            case 6:{
                std::cout<<"liu";
                stk.pop();
                break;
            }
            case 7:{
                std::cout<<"qi";
                stk.pop();
                break;
            }
            case 8:{
                std::cout<<"ba";
                stk.pop();
                break;
            }
            case 9:{
                std::cout<<"jiu";
                stk.pop();
                break;
            }
    }


    }
}
