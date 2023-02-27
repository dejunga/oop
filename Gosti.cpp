#include "Gosti.hpp"
#include <iostream>
using namespace std;

Gosti::Gosti() {}
Gosti::~Gosti() {}

Gosti::Gosti(std::string ime, std::string prezime, double OIB)
    : Osoba::Osoba(ime, prezime, OIB) {}

// void Gosti::setIme(std::string ime) { this->ime = ime; }
// void Gosti::setPrezime(std::string prezime) { this->prezime = prezime; }

// std::string Gosti::getIme() { return ime; }
// std::string Gosti::getPrezime() { return prezime; }

void Gosti::print() { cout << "\nGosti: " << endl; }

void Gosti::obrisi() {
  cout << "Gost je obrisan!" << endl;
  delete this;
}