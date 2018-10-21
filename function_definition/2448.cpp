#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string* make_star(int k){
    if (k == 0){
        string* tmp = new string[int(3*pow(2,10))];
        tmp[0] = "  *  ";
        tmp[1] = " * * ";
        tmp[2] = "*****";
        return tmp;
    }
    string* cur_star = make_star(k-1);

    int last_line = 3*(pow(2, k))/2;

    int len = cur_star[last_line-1].size();
    string tmp = "";

    for (int i=0;i<(len/2+1);i++){
        tmp += " ";
    }

    for (int i=0;i<last_line;i++){
        cur_star[i+last_line] = cur_star[i] + " " + cur_star[i];
        cur_star[i] = tmp+cur_star[i]+tmp;
    }

    return cur_star;
}



int main(){
    int n;
    cin >> n;
    int k = log2(n/3);
    string* result = make_star(k);
    for (int i=0;i<n;i++){
        cout<<result[i]<<endl;
    }
}

                       