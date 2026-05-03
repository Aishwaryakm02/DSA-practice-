#include <iostream>
#include <vector>
using namespace std;

vector <int> ps(vector <int> v,int tar){
    vector <int> ans;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(v[i]+v[j]==tar){
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                return ans;
            }
        }
    }
return ans;
}
  

int main() {
    vector <int> v={2,7,11,18};
    int tar=13;
    
    vector <int> a=ps(v,tar);
    cout<<a[0]<<","<<a[1];
    

    return 0;
}
