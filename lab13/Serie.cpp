#include "Serie.h"
#include <algorithm>
#include <iostream>

Serie::Serie(const string& s) : s(s)
{
}

void Serie::adaugaStudent(const Student& student)
{
    studenti[student.getNumeComplet()] = student;
}

void Serie::stergeStudent(const string& numeComplet)
{
    studenti.erase(numeComplet);
}

void Serie::adaugaNotaLaStudent(const string& numeComplet, const Nota& nota)
{
    studenti[numeComplet].adaugaNota(nota);
}

void Serie::stergeNotaLaStudent(const string& numeComplet, const string& materie)
{
    studenti[numeComplet].stergeNota(materie);
}

void Serie::afiseazaStudentiAlfabetic() const
{
    for (const auto& [numeComplet, student] : studenti)
    {
        cout<<numeComplet<<"\n";
    }
}

void Serie::afiseazaStudentiSiNoteCronologic() const
{
    int i = 0;
    for (const auto& [numeComplet, student] : studenti)
    {
        i++;
        cout<<"Student "<<i<<" -> "<<student.getNumeComplet()<<":\n";
        student.afiseazaNoteCronologic();
    }
}

void Serie::afiseazaNoteStudentDinData(const string& numeComplet, const string& data) const
{
    auto it = studenti.find(numeComplet);

    if(it==studenti.end())
    {
        cerr<<"Nume invalid\n";
    }

    const auto& note = it->second.getNoteDinData(data);
    if(note.empty())
    {
        cout<<"Studentul nu are note in data aleasa\n";
    }
    else
    {
        for(const auto& nota:note)
        {
            nota.afiseaza(cout);
            cout<<"\n";///////////////
        }
    }

}


void Serie::stergeStudenti8()
{
    for (auto it = studenti.begin(); it != studenti.end();)
        {
            if (it->second.calculeazaMedia() < 8)//////////////////
            {
                it = studenti.erase(it);
            }
            else
            {
                ++it;
            }
    }
}


int Serie::numarStudentiCuRestante() const
{
    return count_if(studenti.begin(), studenti.end(), [](const auto& pair)
        {
            return pair.second.calculeazaMedia() < 5;
        });
}

string Serie::studentCuCeaMaiMareMedie() const
{
    auto it = max_element(studenti.begin(), studenti.end(), [](const auto& a, const auto& b)
         {
             return a.second.calculeazaMedia() < b.second.calculeazaMedia();
         });
    return it == studenti.end() ? "" : it->first;
}
