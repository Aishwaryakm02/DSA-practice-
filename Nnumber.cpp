#include <iostream>
using namespace std;

int totsum(int n){
    int sum=0,i;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    return(sum);
    
    
    
}
int main(){
    cout<<"sum of numbers:---"<<totsum(5);
    return 0;
}
