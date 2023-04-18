#include<iostream>


using namespace std;


#include <iostream>
using namespace std;

int* returnpointer (int in[5]) {
    int* out = in;
    return out;
}

int main() {
    int arr[5] = {10, 2, 3, 4, 5};
    int* pArr = returnpointer(arr);
    for (int i = 0; i < 5; i++) 
    cout<< pArr[i]<<"\t";
    
    return 0;
}
