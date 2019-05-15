#ifndef CASEANGLE
#define CASEANGLE

#include "Case.hpp"

class CaseAngle : public Case{
	public:
		CaseAngle(char& c);
		char getTypeCase(){return typeCase;};
		void effet(Joueur *j);

	private:
		char typeCase;

};

#endif