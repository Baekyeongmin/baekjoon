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
    int m,n;
    cin >> m >> n;
    int* prime_table = new int[n+1];
    memset(prime_table, 0, n+1);
    prime_table[0] = 1;
    prime_table[1] = 1;
    find_prime(prime_table, n+1);

    int total_count = 0;
    int first = 0;
    for (int i=m;i<=n;i++){
        if(prime_table[i] == 0){
            if(first == 0){
                first = i;
            }
            total_count += i;
        }
    }
    if(total_count == 0){
        cout << -1 << endl;
    }
    else{
        cout<<total_count<<endl;
        cout<<first<<endl;
    }
    delete prime_table;
}