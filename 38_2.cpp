
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   list<int>list1;
    // cout<<"// first method"<<endl;
    cout<<"first list"<<endl;
    int arr[] ={1,2,3,4,55,6,};
    list1.assign(arr,arr+6);
    for (auto i : list1)
{
    cout<< i <<" ";
}
  cout<<"\n list 2"<<endl;
  list<int>list2;
   list2.assign(list1.begin(), list1.end());
   for (auto i : list2)
{
    cout<< i <<" ";
}
  list<int>l3;
  cout<<"\n list 3: "<<endl;
l3.assign(4,3);
// l3.assign(3,4);
for (auto i : l3)
{
    cout<< i <<" ";
}
    return 0;
}
