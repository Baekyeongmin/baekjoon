#include <iostream>
using namespace std;

int main(void){
    char inputs[1000000];
    cin.getline(inputs, 1000000);
    int result[26]= {0};
    int index = 0;
    while(inputs[index] != '\0'){
        int tmp = int(tolower(inputs[index]))-97;
        result[tmp] ++;
        index++;
    }
    int max = 0;
    int count = 0;
    int id = 0;
    for(int i=0 ;i<26;i++){
        if(max < result[i]){
            max = result[i];
            id = i;
            count = 1;
        }
        else if(max == result[i]){
            count++;
        }
    }

    if(count>1){
        cout<<"?"<<endl;
    }
    else{
        cout<<char(id+65)<<endl;
    }
}