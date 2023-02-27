#include "Osoblje.hpp"
#include <iostream>

// konstruktor
Osoblje::Osoblje(std::string ime, std::string prezime, int OIB, int ID) {
  Osoba::setIme(ime);
  Osoba::setPrezime(prezime);
  Osoba::setOIB(OIB);
  Osoblje::setID(ID);
}

// destruktor
Osoblje::~Osoblje(){};

// seteri
// void Osoblje::setIme(std::string ime) { this->ime = ime; }
// void Osoblje::setPrezime(std::string prezime) { this->prezime = prezime; }
void Osoblje::setID(int ID) { this->ID = ID; }

// geteri
// string Osoblje::getIme() { return ime; }
// string Osoblje::getPrezime() { return prezime; }
int Osoblje::getID() { return ID; }

void Osoblje::obrisi() {
  std::cout << "Osoblje je obrisano!" << std::endl;
  delete this;
}

// ispis podataka o osoblju
void Osoblje::print() {
  std::cout << "Ime: " << getIme() << std::endl;
  std::cout << "Prezime: " << getPrezime() << std::endl;
  std::cout << "ID: " << ID << std::endl;
}