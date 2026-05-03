#include <iostream>
#include <vector>
using namespace std;

vector <int> ps(vector <int> v,int tar){
    vector <int> ans;
    int i=0,j=3;
    while(i<j){
        int ps=v[i]+v[j];
        if(ps>tar){
            j--;
            
        }else if(ps<tar){
            i++;
        }else{
            ans.push_back(v[i]);
            ans.push_back(v[j]);
            return ans;
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
