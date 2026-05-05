#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v={1,2,2,2,1,2};
    int freq=0,ans=0;
    for(int i=0;i<v.size();i++){
        if(freq==0){
            ans=v[i];
        }
        if(v[i]==ans){
            freq++;
        }else{
            freq--;
        }
    }
    cout<<ans;
    
    

    return 0;
}
