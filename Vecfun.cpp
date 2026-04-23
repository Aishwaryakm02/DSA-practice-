#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec={2,6,4,8};
    //to determine no. of elements 
    cout<<"size of vector"<<vec.size();
    //adds element at the end
    vec.push_back(25);
    vec.push_back(45);
  // to print every element in vecto
    for(int i:vec){
        cout<<i<<endl;
    }

    

    return 0;
}

output:--size of vector4
         2
        6
        4
        8
        25
       45
