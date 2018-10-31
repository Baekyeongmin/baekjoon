#include <iostream>
using namespace std;

void find_prime(int* result, int range){
    for (int i=2;i<range;i++){
        if (result[i] == 0){
            int tmp = i;
            int j = 2;
            while(tmp*j<range){
                result[tmp*j] = 1;
                j++;
            }
        }
    }
}

int main(void){
    int prime_table[10001] = {1,1};
    find_prime(prime_table, 10001);
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int k;
        cin >> k;
        for(int i=k/2;i>1;i--){
            if(prime_table[i] == 0){
                if(prime_table[k-i] == 0){
                    cout<<i<<" "<<k-i<<"\n";
                    break;
                }
            }
        }
    }
    
}