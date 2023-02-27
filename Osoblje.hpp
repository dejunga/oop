#pragma once
#include "Osoba.hpp"


class Osoblje : public Osoba {
private:
    int ID;
    

public:
    Osoblje();
    ~Osoblje();

    Osoblje(std::string ime, std::string prezime, int OIB, int ID);

    void setID(int ID);

    int getID();

virtual void print() override;

virtual void obrisi();

};



