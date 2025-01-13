#include <string>
#include <iostream>

using namespace std;

class Nota {
    string data;  // Format YYYY.MM.DD
    string acr;  //acr
    int n;   //int n -- valoare

public:
    Nota(const string& data, const string& acr, double valoare);
    //afisare
    //op<

    string getData() const;
    string getAcronim() const;
    double getValoare() const;

    bool operator<(const Nota& ntt) const;

    void afiseaza(ostream& out) const;

    friend ostream& operator<<(ostream& os, const Nota& nota);
};

