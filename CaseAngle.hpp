#ifndef CASEANGLE
#define CASEANGLE

#include "Case.hpp"

class CaseAngle : public Case{
	public:
		CaseAngle(char& c);
		char getTypeCase(){return typeCase;};

	private:
		char typeCase;

};

#endif