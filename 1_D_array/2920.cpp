#include <iostream>
using namespace std;


int main(void){
    int gap = 0;
    int arr[8];
    for (int i=0;i<8;i++){
        int a;
        a = cin.get();
        cin.get();
        arr[i] = a - 48;
        if(i == 1){
            gap = arr[i] - arr[i-1];
        }
        else if(i>1){
            if (gap != arr[i] - arr[i-1]){
                gap = 0;
                break;
            }
        }
    }
    if (gap == 0){
        cout<<"mixed"<<endl;
    }
    else if (gap == 1){
        cout<<"ascending"<<endl;
    }
    else if (gap == -1){
        cout<<"descending"<<endl;
    }
}