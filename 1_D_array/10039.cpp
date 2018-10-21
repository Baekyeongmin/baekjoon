#include <iostream>
using namespace std;

int main(void){
    int a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    int sum = 0;
    for (int i=0;i<5;i++){
        if(a[i] < 40){
            sum+=40;
        }
        else{
            sum+=a[i];
        }
    }
    cout<<sum/5.<<endl;
}