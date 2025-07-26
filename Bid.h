#ifndef BID_H
#define BID_H

#include <string>
using namespace std;

struct Bid {
    string bidId;
    string title;
    string fund;
    double amount;

    Bid() {
        amount = 0.0;
    }
};

void displayBid(Bid bid);

#endif
