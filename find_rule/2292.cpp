#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    n -= 1;
    int result = 1;
    while(n>0){
        result++;
        n -= (result-1)*6;
    }
    cout<<result<<endl;
}
