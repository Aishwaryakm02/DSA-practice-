#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v={1,1,2,2,2};
    int freq=1,ans=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            freq++;
        }
        else{
            freq=1;ans=v[i];
        }
        if(freq>2){
            cout<<ans;
            break;
        }
    }
    

    return 0;
}
