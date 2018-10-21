#include <iostream>
using namespace std;

int main(){
    char* inputs = new char[1000000];
    cin.getline(inputs,1000000);
    
    if (inputs[0] == '\0'){
        cout<<0<<endl;
    }
    else if (inputs[0] == ' ' && inputs[1] == '\0'){
        cout<<0<<endl;
    }
    else{
        int index = 0;
        int count = 0;
        if (inputs[0] == ' ') index = 1;
        while(true){
            if((inputs[index]) == ' ' && (inputs[index+1]) == '\0'){
                count++;
                break;
            }
            else if((inputs[index]) == '\0'){
                count++;
                break;
            }

            if (inputs[index] == ' '){
                count++;
            }

            index++;
        }
        cout<<count<<endl;
    }
}