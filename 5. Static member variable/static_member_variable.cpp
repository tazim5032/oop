#include<bits/stdc++.h>
using namespace std;
class MyClass{
    static int x,y; // static member variable
    public:
        void setValue(int a, int b){
            x=a;
            y=b;
        }
        void print(){
            cout<<x<<" "<<y<<endl;
        }
};

int MyClass::x; // must be defined here
int MyClass::y;

int main(){
    MyClass a,b; //chk withdrawing static then you will realize the difference

    a.setValue(100,200);
    a.print();
    b.print();
}


