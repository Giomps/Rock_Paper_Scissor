#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>

class Player {
    public:
        std::vector<std::string> choice;
        int score;

        Player(std::vector<std::string> c, int s) {
            choice = c;
            score = s;
        }
};

void games() {
    srand(time(NULL));

    Player player1({"Rock", "Paper", "Scissor"}, 0);
    Player player2({"Rock", "Paper", "Scissor"}, 0);

    int player1_choice;
    int player2_choice;

    while(true) {
        
        player1_choice = rand() % player1.choice.size();
        player2_choice = rand() % player2.choice.size();

        if(player1.choice[player1_choice] == "Rock" && player2.choice[player2_choice] == "Paper") {
            std::cout << "Player 1 chooses Rock\n";
            std::cout << "Player 2 chooses Paper\n";
            std::cout << "Player 2 wins\n";
            player2.score++;

        } else if(player1.choice[player1_choice] == "Rock" && player2.choice[player2_choice] == "Scissor") {
            std::cout << "Player 1 chooses Rock\n";
            std::cout << "Player 2 chooses Scissor\n";
            std::cout << "Player 1 wins\n";
            player1.score++;

        } else if(player1.choice[player1_choice] == "Paper" && player2.choice[player2_choice] == "Rock") {
            std::cout << "Player 1 chooses Paper\n";
            std::cout << "Player 2 chooses Rock\n";
            std::cout << "Player 1 wins\n";
            player1.score++;

        } else if(player1.choice[player1_choice] == "Paper" && player2.choice[player2_choice] == "Scissor") {
            std::cout << "Player 1 chooses Paper\n";
            std::cout << "Player 2 chooses Scissor\n";
            std::cout << "Player 2 wins\n";
            player2.score++;

        } else if(player1.choice[player1_choice] == "Scissor" && player2.choice[player2_choice] == "Rock") {
            std::cout << "Player 1 chooses Scissor\n";
            std::cout << "Player 2 chooses Rock\n";
            std::cout << "Player 2 wins\n";
            player2.score++;

        } else if(player1.choice[player1_choice] == "Scissor" && player2.choice[player2_choice] == "Paper") {
            std::cout << "Player 1 chooses Scissor\n";
            std::cout << "Player 2 chooses Paper\n";
            std::cout << "Player 1 wins\n";
            player1.score++;

        } else {
            std::cout << "Tie !\n";
        }

        std::cout << "Player1's score : " << player1.score << " - " << "Player2's score : " << player2.score << "\n";

        if(player1.score == 3) {
            std::cout << "Congratulation Player1\n";
            break;
        }

        if(player2.score == 3) {
            std::cout << "Congratulation Player2\n";
            break;
        }

    }
}

int main() {

    games();

    return 0;
}