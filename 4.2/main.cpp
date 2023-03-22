using namespace std;

string fordit(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}


int main()
{
    string s, szo, mondat;
    bool van = false;
    getline(cin, s);
    s+=" ";
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            if(szo.size()%2!=0 && szo!=fordit(szo)){
                van = true;
                mondat+=fordit(szo)+" ";
            } else {
                mondat+=szo+" ";
            }
            szo = "";
        } else {
            szo+=s[i];
        }
    }

    if(van){
        cout << mondat;
    } else {
        cout << "nu exista";
    }
    return 0;
}
