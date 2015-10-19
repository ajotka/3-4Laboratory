//The program, which improves data encapsulation.
//
//Class 2, 3 + 3 states (public, private, protected), 3 + 3 methods.
//One class pulls out the second data from each state.

#include <iostream>
#include "Klasy.h"

//
//	AJOTKA
//


int main(){
    Czlowiek czlowiek("Marian","Nowak",10);
    Klasa klasa;
    Uczen uczen(czlowiek,klasa);
    uczen.pokaz();
}
