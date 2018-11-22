#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string s;
        int m;
        char trash;
        deque<int> d;
        cin >> s;
        cin >> m;
        cin >> trash;
        for(int i=0;i<m;i++){
            int tmp;
            cin>>tmp;
            if(i != m-1){
                cin>>trash;
            }
            d.push_back(tmp);
        }
        cin >> trash;

        int reverse = 0;
        int success = 0;
        for(int i=0;i<s.length();i++){
            char command = s[i];
            if(command == 'R'){
                reverse ++;
            }
            else if(command == 'D'){
                if (d.size()>0){
                    int tmp = reverse%2;
                    if(tmp == 1){
                        d.pop_back();
                    }
                    else{
                        d.pop_front();
                    }
                }
                else{
                    success = 1;
                    break;
                }
            }
        }
        if(success == 0){
            if(reverse%2 == 0){
                deque<int>::iterator it;
                cout<<'[';
                for(it = d.begin();it!=d.end();it++){
                    cout<<*it;
                    if(it+1 != d.end()){
                        cout<<',';
                    }
                }
                cout<<']'<<endl;
            }
            else{
                deque<int>::iterator it;
                deque<int> tmp_d;
                for(it = d.begin();it!=d.end();it++){
                    tmp_d.push_front(*it);
                }
                cout<<'[';
                for(it = tmp_d.begin();it!=tmp_d.end();it++){
                    cout<<*it;
                    if(it+1 != tmp_d.end()){
                        cout<<',';
                    }
                }
                cout<<']'<<endl;
            }
        }
        else{
            cout<<"error"<<endl;
        }

    }
}