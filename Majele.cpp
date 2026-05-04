#include <iostream>
#include <vector>
using namespace std;

int maj(vector <int> v){
    for(int val:v){
        int count=0;
        for(int ele:v){
            if(ele==val){
                count++;
                
            }
        }
        if(count>2){
            return val;
        }
    }
    return -1;
}

int main() {
    vector <int> v={1,1,2,2,1};
    int value=maj(v);
    cout<<value;

    return 0;
}
