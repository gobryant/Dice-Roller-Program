#include <iostream>
#include <vector>

int main() {
    
    int number_of_dice;
    int l = 1;
    
    srand(static_cast<unsigned int>(time(0)));
    
    std::cout << "How many dice do you want: ";
    std::cin >> number_of_dice;
    
    if (number_of_dice >= 1) {
    std::vector<int> dice(number_of_dice);
    
    for (int i = 0; i < number_of_dice; ++i) {
        
        std::cout << "how many faces does dice " << i + 1 << " have: \n";
        std::cin >> dice[i];
        
    }
    for (int k = 0; k < number_of_dice; k++) {
        
        dice[k] = (1 + (rand() % dice[k]));
        
    }
     for (int i = 0; i < number_of_dice; i++) {
         std::cout << "Dice " << l << " rolled " << dice[i] << " \n";
         ++l;
     }
    }
    
    else {
        std::cout << "You must roll at least one die.\n";
    }
    
    return 0;
}