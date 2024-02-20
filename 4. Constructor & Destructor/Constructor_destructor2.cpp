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
void funA(){
    cout<<"Creating object from funA()"<<endl;
    MyClass smp;
}
int main(){
    cout<<"Creating object from main()"<<endl;
    MyClass smp;
    cout<<"Calling funA()"<<endl;
    funA();
    cout<<"funA() is called"<<endl;
}



