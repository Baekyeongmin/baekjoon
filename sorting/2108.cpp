#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int* arr = new int[n];
    int count[8001] = {0};
    int total = 0;
    for(int i=0; i<n;i++){
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
        count[tmp+4000]++;
        
        total += tmp;
    }
    sort(arr,arr+n);
    cout<< floor(total/float(n)+0.5) << '\n';
    
    cout<<arr[n/2]<<'\n';

    int first_max = distance(count, max_element(count, count+8001));
    int tmp_max = count[first_max];
    count[first_max] = 0;
    int second_max = distance(count, max_element(count, count+8001));
    if (count[second_max] == tmp_max){
        cout<<second_max-4000<<'\n';
    }
    else{
        cout<<first_max-4000<<'\n';
    }

    cout<<arr[n-1]-arr[0]<<'\n';
}