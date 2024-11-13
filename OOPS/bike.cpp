#include<iostream>
#include<vector>
#include<string>
using namespace std;
class bike{
    private:
    int tyresize;
    int enginesize;
    public:
    static int noofbikes;
    void settyre(int tyresize)
    {
        this->tyresize=tyresize;
    }
    void setengin(int enginesize)
    {
        this->enginesize=enginesize;
    }
    int gettyre()
    {
        return tyresize;
    }int getengin()
    {
        return enginesize;
    }
    //default costructor
    bike(int tyresize,int enginesize)
    {
        this->tyresize=tyresize;
        this->enginesize=enginesize;
    }
    static void setnoofbike()
    {
        noofbikes++;
    }
    //distructor
    // ~bike(){
    //     cout<<"distructor call hua"<<endl;
    // }
};
int main()
{
    bike tvs(12,100);
    bike honda(13,150);
    bike royalenfield(15,350);
    royalenfield.setnoofbike();
    cout<<tvs.gettyre()<<" "<<tvs.getengin()<<endl;
    cout<<honda.gettyre()<<" "<<honda.getengin()<<endl;
    cout<<royalenfield.gettyre()<<" "<<royalenfield.getengin()<<endl;
}