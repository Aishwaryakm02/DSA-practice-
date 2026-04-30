#include <iostream>
using namespace std;

int main() {
    string c[3]={"flow","flowers","fling"};
    string result ="";
    for(int i=0;i<c[0].length();i++){
        int ch=c[0][i];
        for(int j=0;j<3;j++){
            if(j>=c[i].length() || c[j][i]!=ch){
                cout<<result;
                return 0;
            }
    
            
                
            
            
        }
        result+=ch;
    }

    cout<<result;


    return 0;
}
