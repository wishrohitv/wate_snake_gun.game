#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "welcome to game\n";

    string user_turn;
    string comp_turn;

    // random number generator
    while (true)
    {
        srand(time(0));
        int random_number = rand() % 3;
        // cout << random_number << "\n";

        cout<<"\ncomputer choosed!\n";
        cout << "User turn please choose snake(s) or water(w) or gun(g)"
             << "\n";
        cin >> user_turn;
        // computer turn
        if (random_number == 0)
        {
            string comp_turn = "snake";
            if (user_turn == "s")
            {
                cout << "game is tie!\n";
            }
            else if (user_turn == "g")
            {
                cout << "you win!\n";
            }
            else if (user_turn == "w")
            {
                cout << "you win!\n";
            }
        }
        else if (random_number == 1)
        {
            string comp_turn = "water";
            if (user_turn == "g")
            {
                cout << "compuer win!\n";
            }
            else if (user_turn == "w")
            {
                cout << "game is tie\n";
            }
            else if (user_turn == "s")
            {
                cout << "computer win! and you loss!\n";
            }
        }

        else if (random_number == 2)
        {
            string comp_turn = "gun";
            if (user_turn == "s")
            {
                cout << "computer win!";
            }
            else if (user_turn == "g")
            {
                cout << "game is tie!\n";
            }
            else if (user_turn == "w")
            {
                cout << "you win!\n";
            }
        }
        else if (user_turn == "quit"){
            break;
        }
    }
    return 0;
}
