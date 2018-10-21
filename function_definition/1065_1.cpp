#include <iostream>
using namespace std;



int is_han(int n){
    if (n == 1000){
        return 0;
    }
    else if(n<100){
        return 1;
    }
    int* num_iter = new int[3];
    int index = 0;
    while(n>0){
        int tmp = n % 10;
        num_iter[index] = tmp;
        index ++;
        n /= 10;
    }
    
    if(num_iter[1] - num_iter[0] == num_iter[2] - num_iter[1]){
        return 1;
    }

    else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    int count = 0;
    for (int i=1;i<=n;i++){
        if (is_han(i) == 1){
            count++;
        }
    }
    cout<<count<<endl;
}