#include <iostream>
using namespace std;

int main(void){
    int k;
    cin >> k;
    for (int i=0;i<k;i++){
        int h,w,n;
        cin >> h >> w >> n;
        int n_w;
        int n_h = n%h;
        if(n_h == 0){
            n_w = n/h;
            n_h = h;
        }
        else{
            n_w = n/h+1;
        }
        if(n_w<10){
            cout << n_h << "0" << n_w <<endl;
        }
        else{
            cout << n_h << n_w <<endl;
        }
    
    }
}