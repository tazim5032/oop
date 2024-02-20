//public members can be accessed from outside the class
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int a,b;
        void add(){cout<<a+b<<endl;}
};
int main(){
    A obj;

    obj.a=5;
    obj.b=6;

    obj.add();
}
