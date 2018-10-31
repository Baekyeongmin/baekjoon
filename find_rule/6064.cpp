#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int M,N,x,y;
        cin >> M >> N >> x >> y;
        int tmp_x=0;
        int tmp_y=0;

        int total_count = 0;
        int gab_1, gab_2;

        if (M == x){
            gab_1 = x;
            gab_2 = x;
        }
        else{
            gab_1 = M-x;
            gab_2 = x;
        }
       

        while(tmp_x != M || tmp_y != N){
            total_count += gab_2;
            tmp_y += gab_2;
            tmp_x = gab_2;
            if (tmp_y > N){
                tmp_y %= N;
                if(tmp_y == 0){
                    tmp_y = N;
                }
            }
            
            if(y == tmp_y){
                cout<<total_count<<endl;
                break;
            }
            
            total_count += gab_1;
            tmp_y += gab_1;
            tmp_x = M;
            if (tmp_y > N){
                tmp_y %= N;
                if(tmp_y == 0){
                    tmp_y = N;
                }
            }

            if(x == tmp_x && y == tmp_y){
                cout<<total_count<<endl;
                break;
            }
            else if (tmp_y == N){
                cout<<-1<<endl;
                break;
            }
        }
    }
}