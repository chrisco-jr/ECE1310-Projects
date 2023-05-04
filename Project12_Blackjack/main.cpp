#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    srand(time(0));
    bool flag = true;
    while (flag)
    {
        const int limit = 21;
        
        cout << "New BLACKJACK Game Has Begun!\n";
        
        //initializations
        int playerTotal = 0;
        int dealerTotal = 0;
        bool playerBust = false;
        bool dealerBust = false;
        
        int card1 = drawCard();
        int card2 = drawCard();
        playerTotal = (card1 + card2);
        int cardD1 = drawCard();
        int cardD2 = drawCard();
        playerTotal = (card1 + card2);
        dealerTotal = (cardD1 + cardD2);
        
        cout << "You have drawn a " << card1 << " and " << card2 << endl;
        cout << "Your total is: " << playerTotal << endl;
        cout << "The dealer has drawn a " << cardD1 << " and a hidden card\n";

        //Player hits or stands
        bool promptHit = true;
        
        cout << "Would you like to hit (1) or stand (0)?\n";
        cin >> promptHit;
        
        while (promptHit)
        {
            int card = drawCard();
            playerTotal += card;
            cout << "You have drawn a " << card << " for a total of " << playerTotal << endl;
            
            if(playerTotal > 21)
            {
                playerBust = true;
                cout << "Player has busted\n";
                break;
            }
            
            cout << "Would you like to hit again (1) or stand (0)?\n";
            cin >> promptHit;
        }
        
        cout << "\nThe dealer currently has cards: " << cardD1 << ", " << cardD2 << " for a total of " << dealerTotal << endl;
        //Dealer hits or stands
        if (dealerTotal > 16)
        {
            cout << "The dealer stands\n";
        }
        
        while((!playerBust) && (dealerTotal <= 16))
        {
            int card = drawCard();
            dealerTotal += card;
            cout << "The dealer hits. The dealer draws a " << card << " for a total of " << dealerTotal << endl;
            if (dealerTotal > 21)
            {
                cout << "The dealer has busted\n";
                dealerBust = true;
                break;
            }
            
        }
        
        if (playerTotal == dealerTotal)
        {
            cout << "There is no winner for this match\n\n"; 
        }
        else if (isWinner(playerBust, dealerBust, playerTotal, dealerTotal))
        {
            cout << "The player has won. Congratulations!\n\n";
        }
        else
        {
            cout << "The dealer has won. Better luck next time\n\n";
        }
        
        cout << "_______________________________________________________________\n\n";
    }
    return 0;
}
