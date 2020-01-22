#ifndef __REC_H__
#define __REC_H__

#include "Rec.h"
#include "Location.h"

class Rec {
private:
	Location upLeft;
	Location lowRight;

public:
	bool InitRec(Location& ul, Location& lr);
	void ShowRec();
};

#endif