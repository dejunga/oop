#pragma once
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Iznimka{
public:
Iznimka(string greska);
string getGreska();
protected:
string greska;
};

class popunjeni : public Iznimka{
public:
popunjeni(string greska);
};

class VecIzasao : public Iznimka{
public:
VecIzasao(string greska);
};

class VecUSobi : public Iznimka{
public:
VecUSobi(string greska);
};

