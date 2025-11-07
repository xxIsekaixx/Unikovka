#include <iostream>
#include <string>
using namespace std;

// Struktura pro jednu lokaci (místo)
struct Lokace {
    string jmeno;
    string popis;

    // ukazatele na jiné lokace
    Lokace* nahoru;
    Lokace* dolu;
    Lokace* doleva;
    Lokace* doprava;

    bool maPredmet;
    string predmet;
};

// Inventář hráče
struct Hrac {
    bool privěsek = false;
    bool zrcadlo = false;
    bool pirko = false;
};
