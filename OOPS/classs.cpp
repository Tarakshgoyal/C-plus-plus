#include<iostream>
#include<string>
using namespace std;
class player{
    private:
    int score;
    int health;
    string name;
    public:
    void showdata()
    {
        cout<<"health is : "<<health<<endl;
        cout<<"score is : "<<score<<endl;
        cout<<"name is : "<<name<<endl;
    }
    void setscore(int s)
    {
        score=s;
    }
    void sethealth(int h)
    {
        health=h;
    }
    int getscore()
    {
        return score;
    }
    int gethealth()
    {
        return health;
    }
};
class calculator{
    public:
    int a;
    int b;
    void add()
    {
        cout<<a+b<<endl;
    }
    void sub()
    {
        cout<<a-b<<endl;
    }
    void mul()
    {
        cout<<a*b<<endl;
    }
    void div()
    {
        cout<<a/b<<endl;
    }
};
int main()
{
    player taraksh;
    // taraksh.score = 90;
    // taraksh.health=100;
    // taraksh.name="taraksh";
    // cout<<taraksh.score<<endl;
    // cout<<taraksh.health<<endl;
    // cout<<taraksh.name<<endl;
    player harsh;
    // harsh.score=100;
    // harsh.health=20;
    // harsh.name="harsh";
    // cout<<harsh.score<<endl;
    // cout<<harsh.health<<endl;
    // cout<<harsh.name<<endl;
    player riti;
    // riti.score=200;
    // riti.health=50;
    // riti.name="riti";
    // taraksh.showdata();
    // calculator cal;
    // cal.a=8;
    // cal.b=3;
    // cal.add();
    // cal.sub();
    // cal.mul();
    // cal.div();
    taraksh.setscore(10);
    taraksh.sethealth(100);
    cout<<taraksh.getscore()<<endl;
    cout<<taraksh.gethealth()<<endl;
}