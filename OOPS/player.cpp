#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    public:
    int gethealth()
    {
        return health;
    }
    int getage()
    {
        return age;
    }
    int getscore()
    {
        return score;
    }
    int isalive()
    {
        return alive;
    }
    void sethealth(int health)
    {
        // this->health=health;
        player::health=health;
    }
    void setage(int age)
    {
        player::age=age;
    }
    void setscore(int score)
    {
        player::score=score;
    }
    void setisalive(bool alive)
    {
        player::alive=alive;
    }
};
int add(player a,player b)
{
    return (a.getscore()+b.getscore());
}
player getmaxscoreplayer(player a,player b)
{
    if(a.getscore() > b.getscore())
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    player harsh;
    player raghav;
    player *urvi=new player;
    player urviobject= *urvi;
    harsh.setage(21);
    harsh.setscore(100);
    harsh.setisalive(true);
    harsh.sethealth(70);
    raghav.setage(22);
    raghav.setscore(20);
    raghav.setisalive(true);
    raghav.sethealth(100);
    // urviobject.setscore(40);
    // urviobject.setage(90);
    (*urvi).setscore(40);
    (*urvi).setage(90);
    // cout<<urviobject.getscore()<<endl;
    cout<<(*urvi).getscore()<<endl;
    cout<<add(harsh,raghav)<<endl;
    player sanket=getmaxscoreplayer(harsh,raghav);
    cout<<sanket.getscore();
}   