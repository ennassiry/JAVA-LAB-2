
#include "Etudiant_Ex1.hpp"
#include <iostream>

Etudiant::Etudiant() : nom("Inconnu"), cin("000000000000000"), note1(0), note2(0), note3(0) {}

Etudiant::Etudiant(std::string n, std::string c, double n1, double n2, double n3) 
    : nom(n), cin(c), note1(n1), note2(n2), note3(n3) {}

std::string Etudiant::getNom() const { return nom; }
std::string Etudiant::getCin() const { return cin; }
double Etudiant::getNote1() const { return note1; }
double Etudiant::getNote2() const { return note2; }
double Etudiant::getNote3() const { return note3; }

void Etudiant::setNom(std::string n) { nom = n; }
void Etudiant::setCin(std::string c) { cin = c; }

// Validation des notes
void Etudiant::setNote1(double n) {
    if (n >= 0 && n <= 20) note1 = n;
    else std::cerr << "Note invalide : " << n << std::endl;
}
// ... (idem pour note2 et note3)

double Etudiant::calculerMoyenne() const {
    return (note1 + note2 + note3) / 3.0;
}