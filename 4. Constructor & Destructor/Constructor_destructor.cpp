//all are private member
//constructor is called when an object is created
//destructor is called when an object is erased
//their name should be same as class name
//constructor can have parameters but destructor does not have parameters
//they are automatically called
#include<bits/stdc++.h>
using namespace std;
class MyClass{
    public:
        MyClass(){
            cout<<"From Constructor"<<endl;
        }
        ~MyClass(){
            cout<<"From Destructor"<<endl;
        }
};
int main(){
    MyClass obj;
}

