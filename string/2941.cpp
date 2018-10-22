#include <iostream>
using namespace std;

int main(void){
    char inputs[101];
    int usage[100] = {0};
    cin.getline(inputs,101);
    int total_count = 0;
    int index = 0;

    while(inputs[index] != '\0'){
        if (usage[index] != 1 && inputs[index] == '='){
            if(inputs[index - 1] == 'z'){
                if(index > 1 && inputs[index -2] == 'd'){
                    usage[index-2] = 1;
                    usage[index-1] = 1;
                    usage[index] = 1;
                    total_count++;
                }
                else{
                    usage[index-1] = 1;
                    usage[index] = 1;
                    total_count++;
                }
            }
            else{
                usage[index-1] = 1;
                usage[index] = 1;
                total_count ++;
            }
        }
        else if (usage[index] != 1 && inputs[index] == '-'){
            usage[index-1] = 1;
            usage[index] = 1;
            total_count++;
        }
        else if (usage[index] != 1 && inputs[index] == 'j'){
            if(usage[index-1] != 1 && (inputs[index-1] == 'l' || inputs[index-1] == 'n')){
                usage[index-1] = 1;
                usage[index] = 1;
                total_count++;
            }
        }
        index++;
    }
    for (int i=0; i<index;i++){
        if(usage[i] == 0){
            total_count++;
        }
    }
    cout<<total_count<<endl;

}