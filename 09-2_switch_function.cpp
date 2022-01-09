/*運用switch case 寫出四則運算。

#include <iostream>
using namespace std;
float oper(宣告函數原型);

int main(){
    宣告變數; 
    輸入變數;
    呼叫函數; 
    輸出函數回傳值(ans);
}
float oper(變數傳遞){
    用switch case 計算;
    回傳結果(return ans);
} */
#include<iostream>
using namespace std;
float oper(float a,char b,float c){
    float n;
    switch(b){
        case('+'):
            return(a+c);
            break;
        case('-'):
            return(a-c);
            break;
        case('*'):
            return(a*c);
            break;
        case('/'):
            return(a/c);
    }
}
int main(){
    float a,c;
    char b;
    cin>>a>>b>>c;
    cout<<oper(a,b,c);
}
