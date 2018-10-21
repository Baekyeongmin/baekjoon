#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    cin.ignore();
    char* inputs[1000];
    for(int i=0; i<n; i++){
        inputs[i] = new char[22];
        cin.getline(inputs[i],22);
    }

    for(int i=0; i<n; i++){
        int repeat = inputs[i][0] - 48;
        int index = 2;
        char* result = new char[repeat*20];
        while(inputs[i][index] != '\0'){
            for(int j = 0;j<repeat;j++){
                result[(index-2)*repeat+j] = inputs[i][index];
            }
            index++;
        }
        cout<<result<<endl;
    }
}