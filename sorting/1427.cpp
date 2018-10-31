#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b){
    return a > b;
}

int main(void){
    int n;
    cin >> n;
    int arr[10] ={0};

    int index = 0;
    while(n>0){
        arr[index] = n%10;
        n/=10;
        index ++;
    }

    sort(arr,arr+index, desc);

    for(int i=0; i<index;i++){
        cout<<arr[i];
    }
}