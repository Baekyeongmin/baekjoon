#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int* result = new int[n];
    for (int i=0; i<n;i++){
        unsigned int st, end;
        cin >> st >> end;
        unsigned int dis = end - st;

        long long half_dis = dis/2;
        unsigned int index = 0;

        if (dis == 1){
            result[i] = 1;
            continue;
        }

        while(true){
            if(half_dis - (index+1) < 0){
                break;
            }
            index++;
            half_dis -= index;
        }
        
        dis = dis - 2*(dis/2 - (half_dis));
        
        if(dis > index+1){
            result[i] = index*2+2;
        }
        else if(dis ==0){
            result[i] = index*2;
        }
        else{
            result[i] = index*2+1;
        }
    }

    for (int i=0;i<n;i++){
        cout<<result[i]<<endl;
    }
}