#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string card;
    cin >> card;

    string value, suit;

    if (card.length() == 3)
        value = "10";
    else
        value = string(1, toupper(card[0]));

    char s = toupper(card.back());

    if (value == "A") value = "ace";
    else if (value == "J") value = "jack";
    else if (value == "Q") value = "queen";
    else if (value == "K") value = "king";

    if (s == 'D') suit = "diamonds";
    else if (s == 'H') suit = "hearts";
    else if (s == 'S') suit = "spades";
    else if (s == 'C') suit = "clubs";

    cout << value << " of " << suit;

    return 0;
}