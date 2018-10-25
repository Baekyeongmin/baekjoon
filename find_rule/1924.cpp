#include <iostream>
#include <string>
using namespace std;

int main(void){
    int x,y;
    char day[22] = "SUNMONTUEWEDTHUFRISAT";
    cin >> x >> y;
    int total_day = 0;
    for (int i = 1; i<x;i++){
        if(i == 2){
            total_day += 28;
        }
        else if(i == 4 || i == 6 || i == 9 || i == 11){
            total_day += 30;
        }
        else{
            total_day += 31;
        }
    }
    total_day +=  y;
    total_day %= 7;
    for (int i=0;i<3;i++){
        cout<<day[total_day*3+i];
    }
    cout<<endl;
}