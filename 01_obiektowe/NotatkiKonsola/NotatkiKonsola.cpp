#include <iostream>
/*
Wykona³ Jakub Bêbenek
*/
class Notatka {
private:
    inline static int liczNotatek = 0;
    int idNotatki;
protected:
    std::string tytul;
    std::string tresc;
public:
    Notatka(std::string tytulNot, std::string trescNot)
    {
        liczNotatek++;
        idNotatki = liczNotatek;
        tytul = tytulNot;
        tresc = trescNot;
    };
    void WyswietlNotatke() {
        std::cout << "========NOTATKA========" << std::endl;
        std::cout << "Tytul notatki: " << tytul << std::endl;
        std::cout << "Tresc notatki: " << std::endl << tresc << std::endl;
        std::cout << "=======================" << std::endl;
    }
    void diagnostyka() {
        std::cout << "========DIAGNOSTYKA========" << std::endl;
        std::cout << liczNotatek << ";" << idNotatki << ";" << tytul << ";" << tresc << std::endl;
        std::cout << "===========================" << std::endl;
    }
};

int main()
{
    Notatka Nota1("Zadanie", "Lorem ipsum dolor...");
    Notatka Nota2("Zadanie2", "Lorem ipsum dolor sit amet...");
    Nota1.WyswietlNotatke();
    Nota2.WyswietlNotatke();
    Nota1.diagnostyka();
    Nota2.diagnostyka();

    return 0;
}
