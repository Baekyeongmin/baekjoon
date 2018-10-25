#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int cap[7][10] = {0};
    
    int total_count = 1;
    while (n>0){
        int tmp = n % 10;

        int suc = 0;
        for (int i=0 ; i<total_count;i++){
            if(cap[i][tmp] == 0){
                cap[i][tmp]++;
                suc++;
                break;
            }
            else if(tmp == 6 && cap[i][9] == 0){
                cap[i][9]++;
                suc++;
                break;
            }
            else if(tmp == 9 && cap[i][6] == 0){
                cap[i][6]++;
                suc++;
                break;
            }
        }

        if(suc == 0){
            //cout<<tmp<<endl;
            total_count++;
            cap[total_count-1][tmp]++;
        }

        n /= 10;
        // for(int i=0;i<7;i++){
        //     for(int j=0;j<10;j++){
        //         cout<<cap[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
    }
    cout<<total_count<<endl;
}