#include<iostream>

using namespace std;


int main()
{    // array
    // int n[6] = {0,1,2,3,4,5};
    // cout << n[1];


    // 2d array

//     int n[2][8] ={
//         {1,2,3,4,5,6,7,8,},
//         {66,65,65,77,66,77,77,66}

//     };
// cout << n[1][7] ;

 // arthematic operation on array 
int size, arry1[10], arry2[10], add[10],sub[10],mul[10],div[10],mod[10];
cout << "enter the size  " ;
cin >> size;
cout <<" enter the element in first array" << endl;
for (int i = 0 ; i < size ; i++){
 cin >> arry1[i];
}
 cout <<" enter the element in second array" << endl;
for (int i = 0 ; i < size ; i++)
{
 cin >> arry2[i];
}
for(int i=0 ; i<size; i++){
add[i] = arry1[i]+ arry2[i];
sub[i] = arry1[i]- arry2[i];
mul[i] = arry1[i]* arry2[i];
div[i] = arry1[i]/ arry2[i];
mod[i] = arry1[i]% arry2[i];

}
cout<< "\nadd\tsub\tmul\tdiv\tmod\n" <<endl;
for(int i=0; i<size ; i++)
{
cout << add[i] << "\t";
cout << sub[i] << "\t";
cout << mul[i] << "\t";
cout << div[i] << "\t";
cout << mod[i] << "\t\n";


}

   return 0;


}