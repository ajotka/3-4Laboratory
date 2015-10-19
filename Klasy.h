#ifndef KLASY_H
#define KLASY_H
#pragma once

#include <iostream>
#include <string>

struct Klasa {
    Klasa();
    unsigned int nr;
    char znak;
};

class Czlowiek {
public:
    Czlowiek(   const std::string imie ="none",
                const std::string nazwisko = "none",
                const unsigned int wiek = 0);

    void setImie(const std::string imie );
    std::string getImie();
    void setNazwisko(const std::string nazwisko);
    std::string getNazwisko();

private:
    std::string mImie;
    std::string mNazwisko;

protected:
    int mWiek;
};

class Uczen : public Czlowiek
{
public:
    Uczen( Czlowiek czlowiek = Czlowiek(), Klasa klasa = Klasa() );
    Uczen(  const std::string namefirst,
            const std::string namelast,
            unsigned int wiek,
            Klasa klasa
         );

private:
    Klasa mKlasa;
public:
    void pokaz();
    void promuj();
    
    																	// brak protected, bo i tak nikt po nim nie dziedziczy
    
};

#endif
