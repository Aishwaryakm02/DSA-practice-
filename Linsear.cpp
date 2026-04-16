#include <iostream>
using namespace std;

int ls(int arr[],int size,int tar){
    for(int i=0;i<=size;i++){
        if(arr[i]==tar){
            return i;
        }
        
    }
    return -1;
}

int main() {
    int arr[]={1,2,3,5,8};
    int size=5;
    int target=3;
    cout<<ls(arr,size,target)<<endl;

    return 0;
}
