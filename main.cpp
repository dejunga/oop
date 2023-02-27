#include "Soba.hpp"
#include "Gosti.hpp"
#include "Exception.hpp"
#include "Osoblje.hpp"


int main(){
  Soba s1(20,20);
  

  Osoba* a1= new Gosti("Ivan", "Pernar", 7213129);
  Osoba* a2= new Gosti("Domagoj", "Bilic", 8644672);
  Osoba* a3= new Gosti("Perica", "Horvat", 2345346);
  Osoba* a4= new Gosti("Đuro", "Miš", 32154434);

  // Osoblje o1("Ivana", "Juzic", 131231, 314231);
  // Osoblje o2("Marica", "Kulic", 2123123, 3123);
  // Osoblje o3("Pola", "Guk", 3123123, 23123);

  s1.print();
  // s1.ulaz(&a1);
  // s1.ulaz(&a2);
  // s1.ulaz(&a3);
  // s1.ulaz(&a4);
  
  // s1.ulaz(&o1);
  // s1.ulaz(&o2);
  // s1.ulaz(&o3);
}