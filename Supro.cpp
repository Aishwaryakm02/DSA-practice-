#include <iostream>
using namespace std;

void op(int arr[],int size){
    int sum=0,pro=1;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        pro=pro*arr[i];
        
    }
    cout<<"sum of all ele"<<sum<<endl;
    cout<<"product"<<pro<<endl;
    
    
}

int main() {
    int arr[]={1,2};
    int size=2;
    op(arr,size);
    
    
    

    return 0;
}
