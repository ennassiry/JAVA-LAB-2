#include "Filiere_Ex2.hpp"
#include "Etudiant_Ex2.hpp"

#include<iostream>
int main() {
    Filiere* f1 = new Filiere("Informatique");
    
    // Inscription de plusieurs étudiants
    Etudiant* e1 = new Etudiant("Alice", "123", 15, 16, 17);
    Etudiant* e2 = new Etudiant("Bob", "456", 10, 12, 14);
    Etudiant* e3 = new Etudiant("Charlie", "789", 18, 19, 20);
    
    f1->inscrireEtudiant(e1);
    f1->inscrireEtudiant(e2);
    f1->inscrireEtudiant(e3);
    
    f1->afficherTous();
    std::cout << "Nombre d etudiants : " << f1->getNombreEtudiants() << std::endl;
    
    // Retrait d'un étudiant
    f1->retirerEtudiant(e2);
    std::cout << "\nApres retrait de Bob :" << std::endl;
    f1->afficherTous();
    
    // Nettoyage
    delete f1; // Supprime tous les étudiants restants
    
    return 0;
}