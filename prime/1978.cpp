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
    int n;
    cin >> n;
    int prime_table[1001] = {1,1};
    find_prime(prime_table, 1001);
    int total_count = 0;
    for (int i=0;i<n;i++){
        int k;
        cin >> k;
        if(prime_table[k] == 0){
            total_count++;
        }
    }
    cout<<total_count<<endl;
}