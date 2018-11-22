#include <iostream>
#include <deque>

using namespace std;

int main(void){
    deque<int> d;
    int n,m;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        d.push_back(i+1);
    }
    int result = 0;
    for(int i=0;i<m;i++){
        int tmp;
        cin >> tmp;

        deque<int>::iterator it = d.begin();

        it = d.begin();
        // for(it;it!=d.end();it++){
        //     cout<<*it<<" ";
        // }
        // cout<<endl;

        it = d.begin();


        int st_size = 0;
        while(*it != tmp){
            st_size++;
            it++;
        }
        int ed_size = d.size() - st_size;

        if(st_size<ed_size){
            for(int j=0;j<st_size;j++){
                int k = d.front();
                d.pop_front();
                d.push_back(k);
            }
            result += st_size;
            d.pop_front();
        }
        else{
            for(int j=0;j<ed_size;j++){
                int k = d.back();
                d.pop_back();
                d.push_front(k);
            }
            result += ed_size;
            d.pop_front();
        }

    }

    cout<<result<<endl;
    
}