#include <iostream>
#include <vector>
using namespace std;
int N = 3;
string virag[] =  {"feher", "sarga", "fekete", "piros", "zold"};

bool lehet(vector<string> ruhak, string ujruha)
{
    for(int i = 0; i<ruhak.size(); i++)
    {
        if (ruhak[i] == ujruha)
        {
            return false;
        }
    }
    if (ujruha == "fekete")
    {
        for(int i = 0; i<ruhak.size(); i++)
        {

            if (ruhak[i] == "zold")
            {
                return false;
            }
        }


    }
    if (ujruha == "zold")
    {
        for(int i = 0; i<ruhak.size(); i++)
        {
            if (ruhak[i] == "fekete")
            {
                return false;
            }

        }

    }
    return true;
}
void kiir(vector<string> csokor)
{
    for(int i = 0; i<csokor.size(); i++)
    {
        cout << csokor[i] << " " ;
    }
    cout << endl;
    return;
}
void backtrack(vector<string> koktel, int index)
{
    if (koktel.size() == 3)
    {

            kiir(koktel);


    }
    for(int i = 0; i<5; i++)
    {
        if (lehet(koktel, virag[i]))
        {
            vector<string> tempcsokor;
            for(int j = 0; j<koktel.size(); j++)
            {
                tempcsokor.push_back(koktel[j]);
            }
            tempcsokor.push_back(virag[i]);
            backtrack(tempcsokor, i);
        }
    }
}

int main()
{
    vector<string> koktel;
    backtrack(koktel, 0);
    return 0;
}
