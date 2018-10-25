#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int M,N,x,y;
        cin >> M >> N >> x >> y;
        int tmp_x=1;
        int tmp_y=1;

        int total_count = 1;

        
        total_count+=(x-tmp_x);

        tmp_x = x;
        tmp_y = x;

        if(y == x){
            cout<<total_count<<endl;
        }

        while(tmp_x != M || tmp_y != N){
            
            total_count += (M-tmp_x);
            tmp_y += (M-tmp_x);
            tmp_x = M;
            if (tmp_y > N){
                tmp_y %= N;
            }

            if(x == tmp_x && y == tmp_y){
                cout<<total_count<<endl;
                break;
            }
            else if (tmp_y == N){
                cout<<-1<<endl;
                break;
            }


            tmp_x = x;
            total_count += x;
            tmp_y += x;
            if (tmp_y > N){
                tmp_y %= N;
            }
            
            if(y == tmp_y){
                cout<<total_count<<endl;
                break;
            }

        }
    }
}