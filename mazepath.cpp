#include<iostream>
#include<string>
using namespace std;
int maze(int sr,int sc,int er,int ec)
{
    if(sr>er || sc>ec)
    {
        return 0;
    }
    if(sr==er && sc==ec)
    {
        return 1;
    }
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    int totalways=rightways+downways;
    return totalways;
}
int maze2(int row,int col)
{
    if(row<1 || col<1)
    {
        return 0;
    }
    if(row==1 && col==1)
    {
        return 1;
    }
    int rightways=maze2(row,col-1);
    int downways=maze2(row-1,col);
    int totalways=rightways+downways;
    return totalways;
}
void printpath(int sr,int sc,int er,int ec,string s)
{
    if(sr>er || sc>ec)
    {
        return;
    }
    if(sr==er && sc==ec)
    {
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
}
void printpath2(int row,int col,string s)
{
    if(row<1 || col<<1)
    {
        return ;
    }
    if(row==1 && col==1)
    {
        return;
    }
    printpath2(row,col-1,s+'R');
    printpath2(row-1,col,s+'D');
}
int main()
{
    cout<<maze(0,0,5,5);
    printpath(0,0,5,5,"");
}