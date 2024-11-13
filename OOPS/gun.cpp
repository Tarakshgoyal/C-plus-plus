#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class player{
    private:
    class helmet{
        int hp;
        int level;
        public:
        void sethp(int hp)
        {
            this->hp=hp;
        }
        void setlevel(int level)
        {
            this->level=level;
        }
        int gethp()
        {
            return hp;
        }
        int getlevel(){
            return level;
        }
    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    helmet he;
    
    public:
    int gethealth(){
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
    int isalive(){
        return alive;
    }
    Gun getGun()
    {
        return gun;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age)
    {
        this->age=age;
    }
    void setscore(int score)
    {
        this->score=score;
    }
    void setalive(bool alive)
    {
        this->alive=alive;
    }
    void setgun(Gun gun)
    {
        this->gun=gun;
    }
    void sethelmet(int level)
    {
        helmet *he=new helmet;
        he->setlevel(level);
        int health=0;
        if(level==1)
        {
            health=25;
        }
        else if(level==2)
        {
            health=50;
        }
        else if(level==3)
        {
            health=100;
        }
        else
        {
            cout<<"error"<<endl;
        }
        he->sethp(health);
        this->he=*he;
    }
    void gethelmet()
    {
        cout<<he.gethp()<<endl;
        cout<<he.getlevel()<<endl;
    }
};
int main()
{
    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=2;
    Gun awm;
    awm.ammo=15;
    awm.damage=150;
    awm.scope=8;
    player harsh;
    player raghav;
    player *urvi=new player;
    player urviobject= *urvi;
    harsh.setage(21);
    harsh.setscore(100);
    harsh.setalive(true);
    harsh.sethealth(70);
    harsh.setgun(akm);
    harsh.sethelmet(2);
    raghav.setage(22);
    raghav.setscore(20);
    raghav.setalive(true);
    raghav.sethealth(100);
    raghav.setgun(awm);
    raghav.sethelmet(3);
    urvi->sethealth(20);
    cout<<urvi->gethealth()<<endl;
    Gun gun123=raghav.getGun();
    cout<<gun123.damage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;
    harsh.gethelmet();
    raghav.gethelmet();
    player p[3]={harsh,raghav,*urvi};
    cout<<p[0].getage();
}