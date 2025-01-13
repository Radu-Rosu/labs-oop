#include "Student.h"
#include <numeric>

Student::Student() : nume(""), prenume("")
{}

Student::Student(const string& nume, const string& prenume)
    : nume(nume), prenume(prenume)
{}

string Student::getNumeComplet() const
{
    return nume + " " + prenume;
}

void Student::adaugaNota(const Nota& nota)
{
    note.insert(nota);
}

void Student::stergeNota(const string& acr)
{
    for(auto it = note.begin(); it != note.end();)
    {
        if(it->getAcronim() == acr)
        {
            it = note.erase(it);
        }
        else
        {
            ++it;
        }
    }
}

void Student::afiseazaNoteCronologic() const
{
    for (const auto& nota : note)
        {
            nota.afiseaza(cout);
            cout<<"\n";////////////////////////
        }
    return;
}

vector<Nota> Student::getNoteDinData(const string& data) const////////
{
    vector<Nota> raportare;

    for(const auto& nota:note)
    {
        if(nota.getData() == data)
        {
            raportare.push_back(nota);
        }
    }
    return raportare;
}

double Student::calculeazaMedia() const
{
    if (note.empty()) return 0.0;
    double suma = accumulate(note.begin(), note.end(), 0.0,
            [](double total, const Nota& nota)
            {
                return total+nota.getValoare();
            });

    return suma/note.size();
}

ostream& operator<<(ostream& out, const Student& student)
{
    out<<student.getNumeComplet();
    return out;
}
