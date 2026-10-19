#include<string>
#pragma once
class Etudiant;
#include <vector>

class Filiere {
private:
    std::string nomFiliere;
    std::vector<Etudiant*> etudiants; // Association 1-N

public:
    Filiere(std::string nom);
    ~Filiere();
    void inscrireEtudiant(Etudiant* e);
    void retirerEtudiant(Etudiant* e);
    int getNombreEtudiants() const;
    void afficherTous() const;
};