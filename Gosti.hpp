#pragma once

#include "Osoba.hpp"
#include <iostream>


class Gosti : public Osoba {
public:
    Gosti();
    ~Gosti();

    Gosti(std::string ime, std::string prezime, double OIB);

    void setOIB(double OIB);
    double getOIB();

virtual void print() override;
virtual void obrisi();

};



