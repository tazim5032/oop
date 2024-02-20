//private members can be accessed from outside the class
//this code will give error
#include<bits/stdc++.h>
using namespace std;
class A{
    private:
        int a,b;
    public:
        void add(){cout<<a+b<<endl;}
};
int main(){
    A obj;

    obj.a=5; // can not access a and b
    obj.b=6;

    obj.add();
}
