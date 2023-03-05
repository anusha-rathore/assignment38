#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   list<char>charlist1;
   for(char i= 'A'; i<='Z';i++){
       charlist1.push_back(i);
   }
   cout <<"list elements:"<<endl;
   
   list<char>::const_iterator x;
   for(x=charlist1.begin(); x!= charlist1.end(); x++)
   {
       cout<<*x<<" ";
   }

return 0;
}