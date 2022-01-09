/*輸入身高(公分)，體重(公斤)，求出BMI
BMI = 體重(公斤) / 身高平方(公尺)*/
#include<iostream>
using namespace std;
int main(){
    float h,w,bmi;
    cout<<"請輸入身高(公分)、體重(公斤)";
    cin>>h>>w;
    bmi=w/((h/100)*(h/100));
    cout<<"BMI="<<bmi;
}
