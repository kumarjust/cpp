#include<iostream>
using namespace std;

int main()

{


  int n;
  int* ptr;

   cout <<"enter the size of array:"<< endl;
    cin>>n;
  //  int arr[n];
   

ptr = (int*)calloc(n, sizeof(int));

 if (ptr == NULL) {
        cout << "Memory not allocated.\n";
    }
    else {
  
        // Memory allocated
       cout << "Memory successfully allocated using  malloc : "<< n<< endl;
    

    }  
cout << "enter the elements " ;
   for(int i=0; i<n; ++i){
     ptr[i]= i+1;
     
     }

      
cout<< "the elements are:"<< endl;

for(int i=0; i<n; i++){
  cout<< ptr[i] << "\t";
}
cout << endl;


return 0;

}