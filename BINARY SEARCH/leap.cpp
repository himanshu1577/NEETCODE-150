#include <bits/stdc++.h>
using namespace std;
int main(){
    int x; cin>>x;
    if(x%100==0){
        if(x%400 == 0)
        cout<<"366"<<endl;
        else
        cout<<"365"<<endl;
    }
    else{
        if(x%4==0){
            cout<<"366"<<endl;
        }
        else{
            cout<<"365"<<endl;
        }
    }
}