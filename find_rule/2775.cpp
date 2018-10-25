#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int k,n;
        cin >> k >> n;
        int** apt = new int* [k+1];
        apt[0] = new int[n+1];
        for (int j = 0; j < n+1; j ++){
            apt[0][j] = j;
        }
        
        for (int j = 1; j < k+1; j++){
            apt[j] = new int[n+1];
            apt[j][0] = 0;
        }

        for (int j = 1; j< k+1;j++){
            for (int m=1; m < n+1; m++){
                apt[j][m] = apt[j-1][m] + apt[j][m-1];
            }
        }

        cout<<apt[k][n]<<endl;
    }
}