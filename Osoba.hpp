#pragma once

#include <iostream>
class Osoba{
private:
    std::string ime;
    std::string prezime;
    int OIB;
    
public:
    Osoba();

    virtual ~Osoba();

    Osoba(std::string ime, std::string prezime, int OIB);

    void setIme(std::string ime);
    void setPrezime(std::string prezime);
    void setOIB(int OIB);
    
    std::string getIme();
    std::string getPrezime();
    int getOIB();
    

virtual void print() = 0;
virtual void obrisi();

};



