#include<iostream>
using namespace std;

int main()
{
   int n;
   cout <<"enter the size of array:"<< endl;
   cin>>n;
   int arr[n];
   cout << "enter the elements " ;
   for(int i=0; i<n; i++) cin >> arr[i];

for(int i=0; i<n; i++) cout<< arr[i] << "\t";
cout << endl;
return 0;


}