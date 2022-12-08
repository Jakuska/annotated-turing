//
// Created by mode on 08.12.22.
//

#include "Numbers.h"
// Your First C++ Program
#include <iostream>

int main() {
    int diophantus_age = 84;

    // The riddle in algebra form
    // he was a boy for 1/6th of his life
    // when 1/12th was added, he grew a beard
    // when 1/7th was added, he got married
    // after 5 years in marriage, he had a son
    // but the son died when he was 1/2 age of his father age (when he himself died)
    // after the boy died, the father grieved for 4 years and died
    int calculated_diophantus_age = (diophantus_age / 6) + (diophantus_age / 12) + (diophantus_age / 7) + 5 + (diophantus_age / 2) + 4;
    int diophantus_son_age = diophantus_age / 2;

    std::cout << "Hello World!" << std::endl;
    std::cout << "diophantus_age: " << diophantus_age << std::endl;;
    std::cout << "calculated_diophantus_age: " << calculated_diophantus_age << std::endl;;
    std::cout << "diophantus_son_age: " << diophantus_son_age << std::endl;;

    return 0;
}
