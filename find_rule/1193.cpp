#include <iostream>
using namespace std;

int main(void){
    int x;
    cin >> x;
    int index = 1;
    while(x>0){
        x -= index;
        index++;
    }
    int a,b;
    if ((index-1) % 2 == 0){
        a = x+index-1;
        b = index - a;
    }
    else{
        b = x+index-1;
        a = index - b;
    }
    
    cout<<a<<'/'<<b<<endl;
}