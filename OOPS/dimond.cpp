#include<iostream>
using namespace std;
class A{
    private:
    int a_ka_private;
    public:
    int a_ka_public=3;
    A(){
        cout<<"A ka constructer call hua!\n";
    }
    void show(){
        cout<<a_ka_public<<endl;
    }
};
class B : virtual public A
{
    public:
    int b_ka_public;
    B()
    {
        cout<<"B ka constructer call hua!\n";
    }
    void show(){
        cout<<a_ka_public<<endl;
    }
};
class C : virtual public A
{
    public:
    int c_ka_public;
    C()
    {
        cout<<"C ka constructer call hua!\n";
    }
};
class D : public B , public C
{
    public:
    int D_ka_public;
    D()
    {
        cout<<"D ka constructer call hua!\n";
    }
    void show(){
        cout<<a_ka_public<<endl;
    }
};
int main()
{
    B b;
    A *a;
    a=&b;
    a->show();
}