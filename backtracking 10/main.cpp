#include <iostream>
#include<vector>
using namespace std;
int N = 5;
string virag[] = { "C++","Java","Phyton"," MatLab","PHP"};
/**
A lehet fuggveny, amiben csak azt kell vizsgaljuk,
hogy a megadott uj virag megvan-e mar az ideiglenes csokorban.
Ha igen, akkor hamisat terit vissza,
kulonben igazat
args:
csokor - az ideiglenes csokor, amelyikbe mar lehetnek viragok
n - az ideiglenes csokor nagysaga
ujvirag - az uj viragnak a neve, amit bele szeretnenk tenni a csokorba
*/
bool lehet(vector <string>ruhak,string ujruha )
{
    //vegigmegyunk a tombon, s megnezzuk, hogy barmelyik elem megegyezik-e
    //a uj viraggal, mert ha igen, akkor nem tehetjuk bele a csokorba
        for(int i = 0; i<ruhak.size(); i++)
    {
        if (csokor[i] == ujruha)
        {
            return false;
        }
    }
        if(ujruha=="Java){
           for(int i=0;i<ruhak.size();i++){
            if(ruhak[i]=="Phyton"){
            return false;
            }
    }
    }
    if(ujruha=="Phyton"){
        for(int i=0;i<ruhak.size();i++){
            if(ruhak[i]=="Java"){
    return false;
            }
        }
    }
    return true;

}
/**
Kiir fuggveny, kiir egy string tombot, aminek n a hossza
*/
void kiir(vector<string> koktel, int index)

{
  if(koktel.size()%2==0)
{
  kiir(koktel);
}



for(int i = 0; i<5; i++)
    {
        if(lehet(koktel,virag[i]))
{

vector<string>tempcsokor;
   for(int j=0;j<koktel.size();j++)
   {
     tempcsokor.push_back(koktel[j]);
   }
   tempcsokor.push_back(virag[i]);
   backtrack (tempcsokor,i);
}
    }
}

int main()
{
vector <string>koktel;
    backtrack(koktel, 0);
    return 0;
}
