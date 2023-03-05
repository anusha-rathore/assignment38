#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   list<char>charlist1;
   for(char i= 'A'; i<='Z';i++){
       charlist1.push_back(i);
   }
   cout <<"list elements:"<<endl;
   
    for (auto i : charlist1)
{
    cout<< i <<" ";
}

return 0;
}