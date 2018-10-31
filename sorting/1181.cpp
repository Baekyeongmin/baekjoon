#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void){
    int n;
    cin >> n;
    set<string>* dic = new set<string>[51]; 

    for(int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        dic[tmp.size()].insert(tmp);
    }
    set<string>::iterator it;
    for (int i = 0;i < 51; i++){
        for (it = dic[i].begin();it!=dic[i].end();it++){
            cout<< *it <<'\n';
        }
    }
}
