#include <iostream>
using namespace std;

int main(void){
    char* s = new char[100];
    cin >> s;
    int index = 0;
    int result[26];
    fill_n(result, 26, -1);
    while(s[index] != '\0'){
        int tmp = int(s[index])-97;
        if (result[tmp] == -1){
            result[tmp] = index;
        }
        index++;
    }
    for (int i=0;i<26;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}