#include <map>
#include "Student.h"

using namespace std;

class Serie {
    string s; //nume
    map<string, Student> studenti;   //map<string, Student>std;

public:
    Serie(const string& s);

    void adaugaStudent(const Student& student);
    void stergeStudent(const string& numeComplet);
    void adaugaNotaLaStudent(const string& numeComplet, const Nota& nota);
    void stergeNotaLaStudent(const string& numeComplet, const string& materie);

    void afiseazaStudentiAlfabetic() const;
    void afiseazaStudentiSiNoteCronologic() const;
    void afiseazaNoteStudentDinData(const string& numeComplet, const string& data) const;
    void stergeStudenti8();
    int numarStudentiCuRestante() const;
    string studentCuCeaMaiMareMedie() const;
};

