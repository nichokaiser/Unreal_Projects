#include <iostream>
#include <ctime>

using namespace std;

void PrintIntroduction(int CurrentLevel);
bool PlayGame(int CurrentLevel);

int main(void) {
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxLevels = 3;

    while (LevelDifficulty <= MaxLevels) {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear();
        cin.ignore();

        if (bLevelComplete) {
            LevelDifficulty++;
        }   
    }

    cout << "\n*** Great work agent! You got all the files! Now get out of there! ***\n";

    return 0;
}

void PrintIntroduction(int CurrentLevel) {
    cout << "\nYou are a secret agent breaking into a level " << CurrentLevel << " secure server room...\n";
    cout << "You need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int CurrentLevel) {
    bool bPlayerWon = false;

    PrintIntroduction(CurrentLevel);

    const int CodeNumber1 = (rand() % CurrentLevel) + CurrentLevel;
    const int CodeNumber2 = (rand() % CurrentLevel) + CurrentLevel;
    const int CodeNumber3 = (rand() % CurrentLevel) + CurrentLevel;
    const int CodeNumberSum = CodeNumber1 + CodeNumber2 + CodeNumber3;
    const int CodeNumberProduct = CodeNumber1 * CodeNumber2 * CodeNumber3;

    cout << "+ There are 3 numbers in the code\n";
    cout << "+ The numbers add up to: " << CodeNumberSum << endl;
    cout << "+ The numbers multiply to give: " << CodeNumberProduct << "\n" << endl;

    int PlayerGuess1, PlayerGuess2, PlayerGuess3;

    cin >> PlayerGuess1 >> PlayerGuess2 >> PlayerGuess3;

    int GuessSum = PlayerGuess1 + PlayerGuess2 + PlayerGuess3;
    int GuessProduct = PlayerGuess1 * PlayerGuess2 * PlayerGuess3;

    if (GuessSum == CodeNumberSum && GuessProduct == CodeNumberProduct) {
        cout << "\n*** Well done agent! You have extracted a file! Keep going! ***\n";
        bPlayerWon = true;
    }
    else {
        cout << "\n*** You entered the wrong code! Careful agent! Try again! ***\n";
        bPlayerWon = false;
    }

    return bPlayerWon;
}