#include <iostream>
using namespace std;

int d(int n){
    int first = 0, second = 0, third = 0, fourth = 0;
    
    first = n%10;
    if ((n/10) > 0){
        second = (n%100 - first)/10;
    }
    if ((n/100) > 0){
        third = (n%1000 - second - first)/100;
    }
    if ((n/1000) > 0){
        fourth = (n%10000 - third - second - first)/1000;
    }
    return n+first+second+third+fourth;
}

int main(){
    int arr[10001] = {0};


    while(1){
        int index = 1;
        
        while(arr[index]==1){
            index++;
        }
        
        if(index >= 10000){
            break;
        }
        
        cout<<index<<endl;
        
	    int tmp = index;

        while(1){
            arr[tmp] = 1;
            tmp = d(tmp);
            if (tmp>=10000){
                break;
            }
        }
    }
}

