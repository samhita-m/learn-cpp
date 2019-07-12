/* Rules
1 - Rock
2 - Paper
3 - Scissors
4 - Lizard
5 - Spock

Scissors cuts Paper. 3 > 2
Paper covers Rock. 2 > 1
Rock crushes Lizard. 1 > 4
Lizard poisons Spock. 4 > 5
Spock smashes Scissors. 5 > 3
Scissors decapitate Lizard. 3 > 4
Lizard eats Paper. 4 > 2
Paper disproves Spock. 2 > 5
Spock vaporizes Rock. 5 > 1
Rock crushes Scissors. 1 > 3
*/

/* Summary
1 > 3 or 4
2 > 1 or 5
3 > 2 or 4
4 > 5 or 2
5 > 1 or 3*/
#include <iostream>
#include <stdlib.h>

int main(){
  
  srand(time(NULL));
  int computer = rand()%3 + 1;
  int user = 0;
  
  std::cout << "====================\n";
	std::cout << "rock paper scissors!\n";
	std::cout << "====================\n";

	std::cout << "1) ✊\n";
	std::cout << "2) ✋\n";
	std::cout << "3) ✌️\n";
	std::cout << "4) lizard\n";
  std::cout << "5) spock\n";
  
	std::cout << "shoot! ";
  
  std::cin >> user;
  std::cout << "computer: " << computer << "\n";
  if (user == computer){
    std::cout << "Draw! Play again.\n";
    
  }
  else if ((user == 1 && (computer == 3|| computer == 4)) || (user == 2 &&(computer == 1|| computer == 5)) || (user == 3 && (computer == 2|| computer == 4)) || (user == 4 &&(computer == 5|| computer == 2)) || (user == 5 && (computer == 1|| computer == 3))) {
    std::cout << "Yay! You win T_T.\n";
  }
  else{
    std::cout << "I beat you :P.\n";
  }

}
