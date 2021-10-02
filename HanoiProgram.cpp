/*
Tower of Hanoi Program in C++
C++によるハノイの塔
https://neguse-atama.hatenablog.com
*/
#include<bits/stdc++.h>
using namespace std;
void f(int n,int x,int y){
    if(n>1){
        f(n-1,x,6-x-y);
    }
    cout<<n<<"番を、"<<x<<"軸から"<<y<<"軸へ移動する。"<<endl;
    if(n>1){
        f(n-1,6-x-y,y);
    }
}
int main(void){
    int n;
    cin>>n;
    if(1<n && n<=11){
        cout<<"ハノイの塔(軸は3本)"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"円盤が"<<n<<"枚のとき"<<endl;
        cout<<"円盤の番号を小さい方から順に";
        for(int i=1;i<=n;i++){
            cout<<i<<"番"<<((i==n) ? "とし、\n" : ",");
        }
        cout<<"軸を左から1軸,2軸,3軸とします。"<<endl;
        cout<<"このとき、ハノイの塔をクリアするには、";
        cout<<"以下の手順を実行してください。"<<endl;
        f(n,1,3);
        return 0;
    }else{
        cout<<"2以上11以下の整数を入力値として、";
        cout<<"再度実行してください。"<<endl;
        return 0;
    }
}