#include <iostream>
#include <string.h>
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
    int prime_table[123456*2+1] = {1,1};
    find_prime(prime_table, 123456*2+1);
    int k;
    cin >> k;
    while(k != 0){
        int total_number = 0;
        for(int i = k+1 ; i<=2*k;i++){
            if(prime_table[i] == 0){
                total_number++;
            }
        }
        cout<<total_number<<"\n";

        cin >> k;
    }

}