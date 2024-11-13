#include<iostream>
#include<string>
using namespace std;
class crickter
{
    private:
    string name;
    int age;
    int matches;
    int score;
    public:
    void setname(string name)
    {
        this->name=name;
    }
    void setage(int age)
    {
        this->age=age;
    }
    void setmatch(int matches)
    {
        this->matches=matches;
    }
    void setscore(int score)
    {
        this->score=score;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    int getmatches()
    {
        return matches;
    }
    int getscore()
    {
        return score;
    }
};
int main()
{
    crickter virat;
    virat.setname("virat");
    virat.setage(21);
    virat.setmatch(400);
    virat.setscore(200);
    crickter rohit;
    rohit.setname("rohit");
    rohit.setage(20);
    rohit.setmatch(390);
    rohit.setscore(200);
    crickter hardik;
    hardik.setname("hardik");
    hardik.setage(19);
    hardik.setmatch(350);
    hardik.setscore(150);
    crickter bhumra;
    bhumra.setname("bhumra");
    bhumra.setage(18);
    bhumra.setmatch(351);
    bhumra.setscore(50);
    for(int i=0;i<2;i++)
    {
        crickter *c=new crickter;
    }
    crickter c[4]={virat,rohit,hardik,bhumra};
    for(int i=0;i<4;i++){
        cout<<c[i].getname()<<endl;
        cout<<c[i].getage()<<endl;
        cout<<c[i].getmatches()<<endl;
        cout<<c[i].getscore()<<endl<<endl;
    }
}