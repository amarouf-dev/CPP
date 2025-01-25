
#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

vector<vector<string>> gameState = {
    {" ", " ", " "},
    {" ", " ", " "},
    {" ", " ", " "}
};

bool Win()
{
    for (int i = 0; i < 3; i++)
    {
        if (gameState[i][0] == gameState[i][1] && gameState[i][1] == gameState[i][2] && gameState[i][0] != " ")
            return true;
        if (gameState[0][i] == gameState[1][i] && gameState[1][i] == gameState[2][i] && gameState[0][i] != " ")
            return true;
    }
    if (gameState[0][0] == gameState[1][1] && gameState[1][1] == gameState[2][2] && gameState[0][0] != " ")
        return true;
    if (gameState[0][2] == gameState[1][1] && gameState[1][1] == gameState[2][0] && gameState[0][2] != " ")
        return true;
    return false;
}

bool isDraw()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (gameState[i][j] == " ")
                return false;
    return true;
}

int minimax(int depth, bool isMax)
{
    if (Win())
        return isMax ? -10 + depth : 10 - depth;
    if (isDraw())
        return 0;
    if (isMax)
    {
        int bestScore = -1000;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (gameState[i][j] == " ")
                {
                    gameState[i][j] = "O";
                    int score = minimax(depth + 1, false);
                    gameState[i][j] = " ";
                    bestScore = max(score, bestScore);
                }
            }
        }
        return bestScore;
    }
    else
    {
        int bestScore = 1000;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (gameState[i][j] == " ")
                {
                    gameState[i][j] = "X";
                    int score = minimax(depth + 1, true);
                    gameState[i][j] = " ";
                    bestScore = min(score, bestScore);
                }
            }
        }
        return bestScore;
    }
    return 0;    
}

int main()
{
    bool vsBot = false;

    cout << "Select game mode: " << endl;
    cout << "1. Player vs Player" << endl;
    cout << "2. Player vs Bot" << endl;
    int mode;
    cin >> mode; cin.ignore();
    if (mode == 2)
        vsBot = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << gameState[i][j];
            if (j < 2)
                cout << " | ";
        }
        cout << endl;
        if (i < 2)
            cout << "----------" << endl;
    }
    int turn = 0;
    while (true)
    {
        int score;
        int maxScore = -1000;
        int x, y;
        if (turn % 2 == 0)
        {
            while (1)
            {
                cout << "Player 1 (y, x): ";
                cin >> y >> x; cin.ignore();
                x--;y--;
                if (x < 0 || x > 2 || y < 0 || y > 2)
                    cout << "Invalid cell!" << endl;
                else if (gameState[y][x] != " ")
                    cout << "This cell is already taken!" << endl;
                else
                    break ;
            }
        }
        else if (!vsBot)
        {
            while (1)
            {
                cout << "Player 2 (y, x): ";
                cin >> y >> x; cin.ignore();
                x--;y--;
                if (x < 0 || x > 2 || y < 0 || y > 2)
                    cout << "Invalid cell!" << endl;
                else if (gameState[y][x] != " ")
                    cout << "This cell is already taken!" << endl;
                else
                    break ;
            }
        }
        else
        {
            cout << "bot is thinking..." << endl;
            usleep(1000 * 1000);
            cout << "Bot: " << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (gameState[i][j] == " ")
                    {
                        gameState[i][j] = "O";
                        score = minimax(0, false);
                        gameState[i][j] = " ";
                        if (score > maxScore)
                        {
                            maxScore = score;
                            x = j;
                            y = i;
                        }
                    }
                }
            }
        }
        gameState[y][x] = (turn % 2 == 0) ? "X" : "O";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << gameState[i][j];
                if (j < 2)
                    cout << " | ";
            }
            cout << endl;
            if (i < 2)
                cout << "----------" << endl;
        }
        if (Win())
        {
            cout << "Player " << (turn % 2 == 0 ? "1" : "2") << " wins!" << endl;
            break ;
        }
        if (turn == 8)
        {
            cout << "Draw!" << endl;
            break ;
        }
        turn++;
    }
}