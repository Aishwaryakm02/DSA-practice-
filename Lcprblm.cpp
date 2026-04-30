#include <iostream>
using namespace std;

int main() {
    string c;
    cout<<"enter string";
    cin>>c;
    int total=0;
    for(int i=0;i<c.length();i++){
        int curr,next;
        if(c[i]=='I') curr=1;
        else if(c[i]=='V') curr=5;
        else if(c[i]=='X') curr=10;
        else if(c[i]=='L') curr=50;
        else if(c[i]=='C') curr=100;
        else if(c[i]=='D') curr=500;
        else if(c[i]=='M') curr=1000;
        
        if(i<c.length()-1){
            if(c[i+1]=='I') next=1;
            else if(c[i+1]=='V') next=5;
            else if(c[i+1]=='X') next=10;
            else if(c[i+1]=='L') next=50;
            else if(c[i+1]=='C') next=100;
            else if(c[i+1]=='D') next=500;
            else if(c[i+1]=='M') next=1000;
            
        }else{
            next=0;
        }
        if(curr<next){
            total-=curr;
        }else{
            total+=curr;
        }
        
        
        
        
        
    }
    cout<<total;
    

    return 0;
}
