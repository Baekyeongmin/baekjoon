#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    cin.ignore();
    char inputs[1000][23];
    for(int i=0; i<n; i++){
        cin.getline(inputs[i],23);
    }

    for(int i=0; i<n; i++){
        int repeat = inputs[i][0] - 48;
        int index = 2;
        char* result = new char[160];
        while(inputs[i][index] != '\0'){
            for(int j = 0;j<repeat;j++){
                result[(index-2)*repeat+j] = inputs[i][index];
            }
            index++;
        }
        cout<<result<<endl;
    }
}