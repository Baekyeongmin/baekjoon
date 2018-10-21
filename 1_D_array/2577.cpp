#include <iostream>
using namespace std;

int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c<<endl;
    int mul = a*b*c;
    int result[10] = {0};
    while(mul>0){
        int tmp = mul%10;
        result[tmp] ++;
        mul /= 10;
    }
    for (int i=0;i<10;i++){
        cout<<result[i]<<endl;
    }
}