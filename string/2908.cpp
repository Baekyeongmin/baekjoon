#include <iostream>
using namespace std;

int main(void){
    char inputs[8];
    cin.getline(inputs,8);
    int a = int(inputs[0]-48) + int(inputs[1]-48)*10 + int(inputs[2]-48)*100;
    int b = int(inputs[4]-48) + int(inputs[5]-48)*10 + int(inputs[6]-48)*100;
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
}
