#include <iostream>
#include <string>

using namespace std;
class towar
{
    int numer_id();
    int cena();
    int wartosc_firmy();
    string nazwa_gry();
    string nazwa_firmy();
    string kolekcja_gier();
    string kolekcja_firm();
public:
    void wprowadz();
    void wypisz();
};

//...... tu body funkcji:

class gra : public towar
{
    int numer_id;
    string cena, nazwa_gry;
public:
    void wypisz_gra()
    {
        cout << "numer id gry: " "  " << numer_id << endl;
        cout << "nazwa gry: " "  " << nazwa_gry << endl;
        cout << "cena gry: " "  " << cena << endl;
    wypisz();
    }
    void wprowadz()
    {
    }
};
class firma : public towar
{
    int numer_id, wartosc_firmy;
    string nazwa_firmy;
public:
    void wypisz_firma()
    {
        cout << "numer id firmy: " << numer_id << endl;
        cout << "nazwa firmy: " << nazwa_firmy << endl;
        cout << "wartosc firmy: " << wartosc_firmy << endl;
    wypisz();

    }
    void wprowadz()
    {
    }
};
class sklep : public towar
{
    string kolekcja_gier;
    string kolekcja_firm;
public:
    void wypisz_sklep()
    {
        cout << "kolekcja gier: " << kolekcja_gier << endl;
        cout << "kolekcja firm: " << kolekcja_firm << endl;

    }
    void wprowadz()
    {
    }
};
int main()
{
    gra g1;
    g1.wprowadz();
    g1.wypisz_gra();
    firma f1;
    f1.wprowadz();
    f1.wypisz_firma();
    sklep s1;
    s1.wprowadz();
    s1.wypisz_sklep();

    return 0;
};
