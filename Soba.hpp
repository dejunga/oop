#pragma once
#include "Exception.hpp"
#include "Osoblje.hpp"
#include "Gosti.hpp"

#include <vector>

class Soba{
protected:
  int slobodnaMjesta;
  int maxMjesta;
  std::vector<Gosti *> gost;
  
public:

Soba();
~Soba();

Soba(int slobodnaMjesta, int maxMjesta);

void setSlobodnaMjesta(int slobodnaMjesta);
void setMaxMjesta(int maxMjesta);

void obrisiGosta(Gosti *g1);
void izlaz(Gosti *g1);
void ulaz(Gosti *g1);

virtual void print();

void ispisGostiju();

};
