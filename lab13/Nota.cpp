#include "Nota.h"

Nota::Nota(const string& data, const string& acr, double n)
    : data(data), acr(acr), n(n)
{}

string Nota::getData() const { return data;}
string Nota::getAcronim() const { return acr;}
double Nota::getValoare() const { return n;}

bool Nota::operator<(const Nota& ntt) const
{
    if(data != ntt.data)
        return data < ntt.data;////////////////////////
    return false;
}

void Nota::afiseaza(ostream& out) const
{
    out<<*this;
}

ostream& operator<<(ostream& out, const Nota& nota)
{
    out<<nota.data<<" "<<nota.acr<<" "<<nota.n;
    return out;
}
