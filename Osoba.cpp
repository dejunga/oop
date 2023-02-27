#include "Osoba.hpp"
#include <iostream>
#include <string>


Osoba::Osoba(std::string ime, std::string prezime, int OIB) {
  setIme(ime);
  setPrezime(prezime);
  setOIB(OIB);
};

void setIme(std::string ime);
void setPrezime(std::string prezime);
void setOIB(int OIB);

std::string getIme();
std::string getPrezime();
int getOIB();


void obrisi();

