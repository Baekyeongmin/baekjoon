#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    cin.ignore();
    char** inputs = new char*[n];

    for (int i=0;i<n;i++){
        inputs[i] = new char[80];
        cin.getline(inputs[i],80);
    }
    
    for (int i=0;i<n;i++){
        char* tmp = inputs[i];
        int index = 0;
        int count = 0;
        int score = 0;
        while(tmp[index] != '\0'){
            if(tmp[index] == 'O'){
                count++;
                score += count;
            }
            else{
                count = 0;
            }
            index++;
        }
        cout<<score<<endl;
    }
}
