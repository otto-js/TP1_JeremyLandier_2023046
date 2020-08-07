//
//  nouvelEmploye.cpp
//  TP1_JEREMY_LANDIER_2023046
//
//  Created by JEREMY OTTO on 2020-08-06.
//  Copyright © 2020 JERERMY LANDIER. All rights reserved.
//
#include <iostream>
#include "menu.hpp"


 void monMenu::lireInfosSyndique(std::string& nom, int& matricule, double& salaireHoraire, double& heuresTravaillees){
	std::cout << "Entrez le nom de l'employé syndiqué : " << std::endl;
	std::cin >> nom;
	std::cout << "Entrez le matricule de l'employé syndiqué : " << std::endl;
	std::cin >> matricule;
	std::cout << "Entrez le salaire horaire de l'employé syndiqué : " << std::endl;
	std::cin >> salaireHoraire;
	std::cout << "Entrez le nombre d'heures travaillées de l'employé syndiqué : " << std::endl;
	std::cin >> heuresTravaillees;
	std::cout << std::endl;
}

 void monMenu::lireInfosContractuel(std::string& nom, int& matricule, double& montantContrat, double& semainesTravaillees){
	std::cout << "Entrez le nom de l'employé contractuel : " << std::endl;
	std::cin >> nom;
	std::cout << "Entrez le matricule de l'employé contractuel : " << std::endl;
	std::cin >> matricule;
	std::cout << "Entrez le montant du contrat de l'employé contractuel : " << std::endl;
	std::cin >> montantContrat;
	std::cout << "Entrez le nombre de semaines travaillées par l'employé contractuel : " << std::endl;
	std::cin >> semainesTravaillees;
	std::cout << std::endl;
}

 void monMenu::lireInfosPonctuel(std::string& nom, int& matricule, double& montantPaye){
	std::cout << "Entrez le nom de l'employé ponctuel : " << std::endl;
	std::cin >> nom;
	std::cout << "Entrez le matricule de l'employé ponctuel : " << std::endl;
	std::cin >> matricule;
	std::cout << "Entrez le montant payé à l'employé ponctuel : " << std::endl;
	std::cin >> montantPaye;
	std::cout << std::endl;
}


