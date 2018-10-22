#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    cin.ignore();
    int result = 0;
    for (int i=0; i<n; i++){
        char inputs[100];
        cin >> inputs;
        int alpha[26] = {0};
        int index = 0;
        int is_group = 0;
        while (inputs[index] != '\0'){
            if (alpha[int(inputs[index])-97] == 0){
                alpha[int(inputs[index])-97]++;
            }
            else{
                if(inputs[index-1] != inputs[index]){
                    is_group = 1;
                    break;
                }
            }
            index++;
        }
        if (is_group == 0){
            result++ ;
        }
    }

    cout<<result<<endl;
}
