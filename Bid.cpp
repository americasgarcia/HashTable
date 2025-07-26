/*
 * Bid.cpp
 *
 *  Created on: Jul 25, 2025
 *      Author: americasanche_snhu
 */
#include <iostream>
#include "Bid.h"
using namespace std;

void displayBid(Bid bid) {
    cout << bid.bidId << ": " << bid.title << " | "
         << bid.amount << " | " << bid.fund << endl;
}




