#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[]={10,4,70,43,89};
    int smallest=INT_MAX;
    for(int i=0;i<5;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    cout<<"smallest=---"<<smallest;
    

    return 0;
}
