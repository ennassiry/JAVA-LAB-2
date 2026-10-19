
#include "Filiere_Ex2.hpp"
#include "Etudiant_Ex2.hpp"
#include<string>
#include<algorithm>
#include<iostream>
Filiere::Filiere(std::string nom) : nomFiliere(nom) {}

Filiere::~Filiere() {
    // Libérer la mémoire de tous les étudiants si la filière les possède
    for (auto* e : etudiants) {
        delete e;
    }
    etudiants.clear();
}

void Filiere::inscrireEtudiant(Etudiant* e) {
    if (e != nullptr) {
        etudiants.push_back(e);
        e->setFiliere(this); // Mise à jour réciproque
    }
}

void Filiere::retirerEtudiant(Etudiant* e) {
    auto it = std::find(etudiants.begin(), etudiants.end(), e);
    if (it != etudiants.end()) {
        (*it)->setFiliere(nullptr); // Délier l'étudiant
        etudiants.erase(it);
    }
}

int Filiere::getNombreEtudiants() const {
    return etudiants.size();
}

void Filiere::afficherTous() const {
    std::cout << "Etudiants de la filiere " << nomFiliere << ":" << std::endl;
    for (const auto* e : etudiants) {
        std::cout << "  - " << e->getNom() << " (Moyenne: " << e->calculerMoyenne() << ")" << std::endl;
    }
}