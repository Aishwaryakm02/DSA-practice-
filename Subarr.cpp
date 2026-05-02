// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
// Write C++ code here
int arr[4]={1,2,3,4};
for(int st=0;st<4;st++){
  for(int end=st;end<4;end++){
      for(int i=st;i<=end;i++){
          cout<<arr[i];
      }
      cout<<" ";
  }
  cout<<endl;
}

return 0;

}

