#include "stdafx.h";
#include "DisplayCards.h"

// return the image file names
std::string getCardImageNames(std::string sCurrentHand)
{
	// all pairs
	if (sCurrentHand == "22")
		return "2s.png|2h.png";
	else if (sCurrentHand == "33")
		return "3s.png|3h.png";
	else if (sCurrentHand == "44")
		return "4s.png|4h.png";
	else if (sCurrentHand == "55")
		return "5s.png|5h.png";
	else if (sCurrentHand == "66")
		return "6s.png|6h.png";
	else if (sCurrentHand == "77")
		return "7s.png|7h.png";
	else if (sCurrentHand == "88")
		return "8s.png|8h.png";
	else if (sCurrentHand == "99")
		return "9s.png|9h.png";
	else if (sCurrentHand == "TT")
		return "ts.png|th.png";
	else if (sCurrentHand == "JJ")
		return "js.png|jh.png";
	else if (sCurrentHand == "QQ")
		return "qs.png|qh.png";
	else if (sCurrentHand == "KK")
		return "ks.png|kh.png";
	else if (sCurrentHand == "AA")
		return "as.png|ah.png";

	// Suited
	// Ace
	else if (sCurrentHand == "A2s")
		return "as.png|2s.png";
	else if (sCurrentHand == "A3s")
		return "as.png|3s.png";
	else if (sCurrentHand == "A4s")
		return "as.png|4s.png";
	else if (sCurrentHand == "A5s")
		return "as.png|5s.png";
	else if (sCurrentHand == "A6s")
		return "as.png|6s.png";
	else if (sCurrentHand == "A7s")
		return "as.png|7s.png";
	else if (sCurrentHand == "A8s")
		return "as.png|8s.png";
	else if (sCurrentHand == "A9s")
		return "as.png|9s.png";
	else if (sCurrentHand == "ATs")
		return "as.png|ts.png";
	else if (sCurrentHand == "AJs")
		return "as.png|js.png";
	else if (sCurrentHand == "AQs")
		return "as.png|qs.png";
	else if (sCurrentHand == "AKs")
		return "as.png|ks.png";
	// King
	else if (sCurrentHand == "K8s")
		return "ks.png|8s.png";
	else if (sCurrentHand == "K9s")
		return "ks.png|9s.png";
	else if (sCurrentHand == "KTs")
		return "ks.png|ts.png";
	else if (sCurrentHand == "KJs")
		return "ks.png|js.png";
	else if (sCurrentHand == "KQs")
		return "ks.png|qs.png";
	// Queen
	else if (sCurrentHand == "Q8s")
		return "qs.png|8s.png";
	else if (sCurrentHand == "Q9s")
		return "qs.png|9s.png";
	else if (sCurrentHand == "QTs")
		return "qs.png|ts.png";
	else if (sCurrentHand == "QJs")
		return "qs.png|js.png";
	// Queen
	else if (sCurrentHand == "J9s")
		return "js.png|8s.png";
	else if (sCurrentHand == "JTs")
		return "js.png|9s.png";
	// Others
	else if (sCurrentHand == "54s")
		return "5s.png|4s.png";
	else if (sCurrentHand == "65s")
		return "6s.png|5s.png";
	else if (sCurrentHand == "76s")
		return "7s.png|6s.png";
	else if (sCurrentHand == "87s")
		return "8s.png|7s.png";
	else if (sCurrentHand == "98s")
		return "9s.png|8s.png";
	else if (sCurrentHand == "T9s")
		return "Th.png|9h.png";

	// Offsuit
	// Ace
	else if (sCurrentHand == "AT")
		return "as.png|th.png";
	else if (sCurrentHand == "AJ")
		return "ad.png|js.png";
	else if (sCurrentHand == "AQ")
		return "as.png|qc.png";
	else if (sCurrentHand == "AK")
		return "ac.png|ks.png";
	// King
	else if (sCurrentHand == "KQ")
		return "ks.png|qh.png";
	
	return "jk.png|jk.png"; // display jokers if it gets to here
}

