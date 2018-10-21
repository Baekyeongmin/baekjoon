#include <iostream>
using namespace std;



int is_han(int n){
    int* num_iter = new int[4];
    int index = 0;
    while(n>0){
        int tmp = n % 10;
        num_iter[index] = tmp;
        index ++;
        n /= 10;
    }
    
    if (index <= 2){
        return 1;
    }

    int gap = num_iter[1] - num_iter[0];
    int result = 1;
    for (int i=2;i<index;i++){
        if(num_iter[i] - num_iter[i-1] != gap){
            result = 0;
            break;
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    int count=0;
    for (int i=1;i<=n;i++){
        if (is_han(i) == 1){
            count++;
        }
    }
    cout<<count<<endl;
}