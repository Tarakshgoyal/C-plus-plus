#include<iostream>
#include<vector>
#include<string>
using namespace std;
class vehical
{
    public:
    int tyresize;
    int enginsize;
    int light;
    string companyname;
    // vehical()
    // {
    //     cout<<"constructor call hua vehical ka\n";
    // }
    void showcompany()
    {
        cout<<"name show hua\n";
    }
};
class car : public vehical{
    public:
    int steeringsize;
};
class bike : public vehical{
    public:
    int handlesize;
    // bike(int ts,int es=200) : tyresize(ts),enginsize(es){}
    // bike(int ts) : tyresize(ts),enginsize(100){}
    // bike() : tyresize(12),enginsize(100){}

};
class A{
    private:
    int a_ka_private;//can't access from outside,can't be inherited
    protected:
    int a_ka_protected;//can't access from outside,can be inherited
    public:
    int a_ka_public;//can be accessed from outside,can be inherited
};
class B : public A{
    public:
    int b_ka_public;
    void show(){
        a_ka_protected=5;
    }
};
class C : public B{
    public:
    int c_ka_public;
    void show()
    {
        a_ka_public;
    }
};
int main()
{
    // bike royalenfield(15,350);
    // bike bajaj(13,50);
    // bike honda;
    // honda.handlesize=5;
    // honda.tyresize=10;
    // honda.enginsize=500;
    // honda.companyname="honda";
    // honda.showcompany();
    // cout<<royalenfield.tyresize<<" "<<royalenfield.enginsize<<endl;
    // cout<<bajaj.tyresize<<" "<<bajaj.enginsize;
}