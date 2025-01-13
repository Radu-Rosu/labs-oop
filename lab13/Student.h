#include <set>
#include <vector>
#include <algorithm>
#include "Nota.h"

using namespace std;

class Student {
    string nume;
    string prenume;
    set<Nota> note; //vector<Nota> note;

public:
    Student(); //=default;
    Student(const string& nume, const string& prenume);

    string getNumeComplet() const;

    void adaugaNota(const Nota& nota);
    void stergeNota(const string& acronim);
    void afiseazaNoteCronologic() const;
    vector<Nota> getNoteDinData(const string& data) const;
    double calculeazaMedia() const;

    friend ostream& operator<<(ostream& os, const Student& student);
};


