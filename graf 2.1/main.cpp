#include <iostream>
#include <vector>
#include<fstream>

using namespace std;
//a csomopontok szama
int n = 8;
/**
Fuggveny a vector kiirasara
*/
void kiir(vector<int>v)
{

  for(int i=0;i<v.size();i++)
  {

    cout <<v[i]<<" ";
  }
  cout <<endl;

/**
Leallasi feltetel a backtracking fuggvenynek

Megvizsgalja, hogy a mar bejart varosok tarolasara letrehozott v vektorban hany csomopont van
s ha ez egyenlo n-1, akkor leallhatunk.

Azert kell n-1, s nem n, mert a szomszedossagi matrixnal
azt szeretnenk, ha az 1 es csomopont az 1 es sornak, a 2 es a 2es sornak illetve oszlopnak,
stb felelne meg, s nem a 0 s nak, illetve 1 esnek.
Emiatt vettunk csomopont+1 x csomopont + 1 es szomszeodossagi matrixot,
s a 0 indexu sort es oszlo#include <iostream>
#include <vector>

using namespace std;

//szomszedossagi matrix
int m[10][10];
//a csomopontok szama + 1
int n = 9;

/**
Leallasi feltetel a backtracking fuggvenynek

Megvizsgalja, hogy a mar bejart varosok tarolasara letrehozott v vektorban hany csomopont van
s ha ez egyenlo n-1, akkor leallhatunk.

Azert kell n-1, s nem n, mert a szomszedossagi matrixnal
azt szeretnenk, ha az 1 es csomopont az 1 es sornak, a 2 es a 2es sornak illetve oszlopnak,
stb felelne meg, s nem a 0 s nak, illetve 1 esnek.
Emiatt vettunk csomopont+1 x csomopont + 1 es szomszeodossagi matrixot,
s a 0 indexu sort es oszlopot nem vesszuk figyelembe
*/
bool leall(int m[10][10])
{
  for(int i=1;i<n+1;i++)
  {
    for (int j=1;j<n+1;j++)
      if (m[i][j]>0)return false;

  }
}
return true;
}
/**
Logikai fuggveny, mely megvizsgalja, hogy a jelenlegi csomopontbol lehetseges e a kovetkezo csompontba jutni

Parameterkent atadjuk a jelenlegi, a kovetkezo csomopontokat,
illetve a vektort, ahol az eddig bejart csomopontokat taroljuk.

Ha van osszekottetes a jelenlegi s a kovetkezo csomopont kozott,
illetve meg nem jartunk a kovetkezo csomopontban, akkro igazat terit vissza,
maskepp hamisat
*/
bool lehet(int jelenlegi, int kovetkezo, vector<int> v,int m[10][10])
{
    //van-e osszekottestes a ket csomopont kozott
    if (m[jelenlegi][kovetkezo] == 0)
    {
        return false;
    }
    return true;
}
/**
backtrack fuggveny, amely a jelenlegi csomopontbol kiindulva megprobal
majd minden egyeb csomopontba menni, ha lehetseges.

Ha az osszes csomopontot bejartuk, a fuggveny meghivja a kiiras fuggvenyt
*/
void backtrack(int jelenlegi, vector<int> v,int m[10][10])
{
    // ha bejartunk mindent, irjuk ki a megoldast
    if (leall(m))
    {
        kiir(v);
        return;
    }
    //probaljunk meg az osszes lehetseges
    //csomopontba atmenni, ha lehet
    for(int kovetkezo=1;kovetkezo<n+1;kovetkezo++)
    {
        //csak akkor probaljunk tovabblepni,
        //ha nem a jelenlegi be szeretnenk lepni
        if (kovetkezo!=jelenlegi)
        {
            if (lehet(jelenlegi,kovetkezo, v,m))
            {
                //ha lehetseges tovabblepni,
                //lepjunk tovabb, s mentsuk le a kovetkezo csomopontot egy ideiglenes vektorban
                vector<int> tempv = v;
                tempv.push_back(kovetkezo);
                int tempm[10][10];
                for(int i=1;i<n+1;i++)
                 for(int j=1;j<n+1;j++)
                 tempm[i][j]=m[i][j];
                tempm[jelenlegi] [kovetkezo]=0;
                tempm [kovetkezo][jelenlegi]=0;
                backtrack (kovetkezo,tempv,tempm);


            }
        }
    }

}


int main()
{
    //szomszedossagi matrix
    int m[10][10];

   //szomszedossagi matrix inicializalasa
   int i,j;
   ifstream in("input.txt");


    //szimmetrikus masolas
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            m[j][i]= m[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    //probaljuk meg minden elbol bejarni a grafot
    for(i=0; i<n; i++)
    {
        vector<int> v;
        v.push_back(i);
        backtrack(i, v);
    }
    return 0;
}

pot nem vesszuk figyelembe
*/
bool leall(vector<int> v,int m)
{

    if (v.size() == m-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/**
Logikai fuggveny, mely megvizsgalja, hogy a jelenlegi csomopontbol lehetseges e a kovetkezo csompontba jutni

Parameterkent atadjuk a jelenlegi, a kovetkezo csomopontokat,
illetve a vektort, ahol az eddig bejart csomopontokat taroljuk.

Ha van osszekottetes a jelenlegi s a kovetkezo csomopont kozott,
illetve meg nem jartunk a kovetkezo csomopontban, akkro igazat terit vissza,
maskepp hamisat
*/
bool lehet(int jelenlegi, int kovetkezo, vector<int> v)
{
    //van-e osszekottestes a ket csomopont kozott
    if (m[jelenlegi][kovetkezo] == 0)
    {
        return false;
    }
    //jartunk e mar kovetkezo csomopontban
    for (int i=0; i<v.size(); i++)
    {
        if (v[i] == kovetkezo)
        {
            return false;
        }
    }
    return true;
}
/**
Fuggveny a vector kiirasara
*/
void kiir(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";

    }
    cout << endl;
}

/**
backtrack fuggveny, amely a jelenlegi csomopontbol kiindulva megprobal
majd minden egyeb csomopontba menni, ha lehetseges.

Ha az osszes csomopontot bejartuk, a fuggveny meghivja a kiiras fuggvenyt
*/
void backtrack(int jelenlegi, vector<int> v)
{
    // ha bejartunk mindent, irjuk ki a megoldast
    if (leall(v))
    {
        kiir(v);
        return;
    }
    //probaljunk meg az osszes lehetseges
    //csomopontba atmenni, ha lehet
    for(int i = 1; i<n; i++)
    {
        //csak akkor probaljunk tovabblepni,
        //ha nem a jelenlegi be szeretnenk lepni
        if (i!=jelenlegi)
        {
            if (lehet(jelenlegi, i, v))
            {
                //ha lehetseges tovabblepni,
                //lepjunk tovabb, s mentsuk le a kovetkezo csomopontot egy ideiglenes vektorban
                vector<int> tempv = v;
                tempv.push_back(i);
                backtrack(i, tempv);
            }
        }
    }

}


int main()
{
    //szomszedossagi matrix inicializalasa
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            m[i][j]=0;
        }
    }
    //elek betoltese
    m[1][2] = 1;
    m[1][6] = 1;
    m[2][3] = 1;
    m[2][4] = 1;
    m[3][4]= 1;
    m[4][8]= 1;
    m[5][6]= 1;
    m[5][7]= 1;
    m[5][8]= 1;
    //szimmetrikus masolas
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            m[j][i]= m[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    //probaljuk meg minden elbol bejarni a grafot
    for(i=0; i<n; i++)
    {
        vector<int> v;
        v.push_back(i);
        backtrack(i, v);
    }
    return 0;
}

