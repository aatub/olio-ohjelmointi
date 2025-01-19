#ifndef GAME_H
#define GAME_H

class game
{
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

public:
    game(int maxNumber);
    ~game();
    void play();
    void printGameResult();
};

#endif // GAME_H
