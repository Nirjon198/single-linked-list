#include <iostream>
#include <list>

using namespace std;
int main(){
 list<string>name={"Nirjon","Shawon","Rifat","Rafi"};
 list<string>::iterator itr;
 for (itr = name.begin(); itr != name.end(); itr++) // iterators only support != (inequality).This asks, "Is my current list node the same as the end node?"
 {
    cout<<*itr<<endl;
 }
 return 0;

}