#include "Serie.h"

using namespace std;

int main() {
    Serie serie("AA");

    Student s1("Neagu", "Delia");
    s1.adaugaNota(Nota("2025.01.23", "POO", 8));
    s1.adaugaNota(Nota("2025.01.28", "MN", 8));
    s1.adaugaNota(Nota("2025.02.03", "TAIS", 8));

    Student s2("Gheorghita", "Matei");
    s2.adaugaNota(Nota("2025.01.23", "POO", 7));
    s2.adaugaNota(Nota("2025.01.28", "MN", 2));
    s2.adaugaNota(Nota("2025.02.03", "TAIS", 4));

    Student s3("Iorgu", "Antoneta");
    s3.adaugaNota(Nota("2025.01.23", "POO", 10));
    s3.adaugaNota(Nota("2025.01.28", "MN", 6));
    s3.adaugaNota(Nota("2025.02.03", "TAIS", 9));

    Student s4("Codreanu", "Radu");
    s4.adaugaNota(Nota("2025.01.23", "POO", 6));
    s4.adaugaNota(Nota("2025.01.28", "MN", 5));
    s4.adaugaNota(Nota("2025.02.03", "TAIS", 7));

    serie.adaugaStudent(s1);
    serie.adaugaStudent(s2);
    serie.adaugaStudent(s3);
    serie.adaugaStudent(s4);

    serie.afiseazaStudentiAlfabetic();
    cout<<"\n";

    serie.afiseazaStudentiSiNoteCronologic();
    cout<<"\nStudent cu cea mai mare medie: "<<serie.studentCuCeaMaiMareMedie()<<"\n";
    cout<<"Nr studenti cu restante: "<<serie.numarStudentiCuRestante()<<"\n\n";

    string nume = "Iorgu Antoneta";
    string data = "2025.01.28";
    cout<<"Notele din "<<data<<" ale "<<nume<<"\n";
    serie.afiseazaNoteStudentDinData(nume,data);
    cout<<"\n";

    serie.stergeStudenti8();
    serie.afiseazaStudentiSiNoteCronologic();

    return 0;
}
