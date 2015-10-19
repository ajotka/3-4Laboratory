#include "Klasy.h"

Klasa::Klasa(): nr(1),znak('a') {
}

Czlowiek::Czlowiek(   const std::string imie,
                      const std::string nazwisko,
                      const unsigned int wiek) 
                : mImie(imie),
                  mNazwisko(nazwisko),
                  mWiek(wiek) {
}

void Czlowiek::setImie(const std::string imie ) {
    mImie = imie;
}
std::string Czlowiek::getImie() {
    return mImie;
}
void Czlowiek::setNazwisko(const std::string nazwisko) {
    mNazwisko = nazwisko;
}
std::string Czlowiek::getNazwisko() {
    return mNazwisko;
}

Uczen::Uczen( Czlowiek czlowiek, Klasa klasa ) : Czlowiek(czlowiek), mKlasa(klasa)
{} 

Uczen::Uczen(  const std::string namefirst,
               const std::string namelast,
               unsigned int wiek,
               Klasa klasa
            )
               :Czlowiek(namefirst,namelast,wiek), mKlasa(klasa)
{}

void Uczen::pokaz() {
    std::cout << "Nazwisko: " << getNazwisko() << std::endl;
    std::cout << "Imie:     " << getImie()     << std::endl;
    std::cout << "Klasa:    " << mKlasa.nr << mKlasa.znak << std::endl;
}

void Uczen::promuj() {
    ++mWiek;
    ++mKlasa.nr;
}

