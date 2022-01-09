/*單擺公式
T=2π√(L/g)
T：週期，來回擺動一次所需的時間 (秒)

L：擺長 (公尺)

g：重力加速度，g= 9.8 m/s2

π：圓周率， 3.14159

輸入T值，求出L值。注意，上述公式擺長為「公尺」，輸出答案時以「公分」表示。 
輸出的文字、數字、符號中間都沒有空格。*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float T,L;
    cin>>T;
    L=(pow(T/(2*3.14159),2))*9.8*100;
    cout<<"當週期為"<<T<<"秒時，長度為"<<L<<"公分";
}
