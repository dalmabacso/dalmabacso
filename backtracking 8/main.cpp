#include <iostream>
#include <vector>
using namespace std;
int N = 3;
string virag[] = {"karamell", "csokolade", "tejszin", "dio", "vanilia"};

bool lehet(vector<string> ruhak, string ujruha)
{
    for(int i = 0; i<ruhak.size(); i++)
    {
        if (ruhak[i] == ujruha)
        {
            return false;
        }
    }
    if (ujruha == "karamell")
    {
        for(int i = 0; i<ruhak.size(); i++)
        {

            if (ruhak[i] == "dio")
            {
                return false;
            }
        }


    }
    if (ujruha == "dio")
    {
        for(int i = 0; i<ruhak.size(); i++)
        {
            if (ruhak[i] == "karamell")
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
        if(koktel[0]!="tejszin" && koktel[0]!="vanilia" && koktel[1]!="tejszin" && koktel[1]!="vanilia")
        {
            kiir(koktel);
        }
        else
        {
            return;
        }
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
