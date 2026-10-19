
#include <iostream>
#include <string>
#pragma once
class Filiere;
class Etudiant{
private:
    std::string nom;  // Nom de l'étudiant
    std::string cin;  // Numéro CIN
    double note1;     // Première note
    double note2;     // Deuxième note
    double note3;     // Troisième note
    Filiere *filiere; // Association 1-1

public:
    // Constructeurs
    Etudiant();                                                              // Constructeur par défaut
    Etudiant(std::string n, std::string c, double n1, double n2, double n3); // Constructeur avec paramètres

    // Getters (pour récupérer les valeurs)
    std::string getNom() const;
    std::string getCin() const;
    double getNote1() const;
    double getNote2() const;
    double getNote3() const;

    // Setters (pour modifier les valeurs)
    void setNom(std::string n);
    void setCin(std::string c);
    void setNote1(double n);
    void setNote2(double n);
    void setNote3(double n);

    // Méthode pour calculer la moyenne des notes
    double calculerMoyenne() const;

    void setFiliere(Filiere *f); // Setter pour l'association
    Filiere* getFiliere() const; // Getter pour l'association
};