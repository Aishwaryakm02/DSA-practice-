#include <iostream>
#include <vector>
using namespace std;
//to print elemnts in vector
int main() {
    vector<int> v={1,7,8,3};
    for(int i:v){
        cout<<i<<endl;
    }

    return 0;
}
