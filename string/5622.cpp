#include <iostream>
using namespace std;

int main(void){
    char inputs[16];
    cin >> inputs;
    int time = 0;
    int index = 0;
    while(inputs[index] != '\0'){
        int tmp = (int(inputs[index]) - 65);
        if(tmp<18){
            time += tmp/3 + 3;
        }
        else if(tmp < 25){
            time += (tmp-1)/3 + 3;
        }
        else{
            time += (tmp-2)/3 +3;
        }
        
        index++;
    }
    cout<<time<<endl;
}