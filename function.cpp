#include<iostream>
#include<vector>
using namespace std;

  

//void incrementCount(int count) //pass by value
void incrementCount(int &count)// pass by referance
{
  count=count+1;//increments the value of count inside the function
}
int main()
{
  vector<int> counts;
   for(int i = 1; i<5; i++)
    v.push_back(i);
    for

  int count=0;// initialze the variable count
  int result=0;//  initialze the variable result
  incrementCount(count);//call increment function
 // cout<<"Pass by value\n";
  cout<<"Pass by Reference\n";
  cout<<"Count:";
  cout<<count;//prints the value of count after the function call
  return 0;
}
