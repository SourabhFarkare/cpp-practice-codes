#include <iostream>
using namespace std;

int main() {
    // create
    //first way
    int arr[5]; //by default garbage value hogi aur baad me hum change kar sakte hai
    // second way
    arr[0]=1;
     arr[1]=1;
      arr[2]=1;
       arr[3]=1;
        arr[4]=1;

    int arr_b[]={1,2,3,4,5}; // pehle se intialize hai aur baad me change bhi kar sakte hai
    // third way
    int n;
    cin>>n;
    int arr_c[n]; // by default garbage and baad me change kar sakte hai
    // Read
    int s=sizeof(arr_b)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr_b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}