#ifndef DE_HPP
#define DE_HPP

#include <iostream>
#include <time.h>

class De{
	public: 
		De() : val(-1) {} //Constructeur par défaut : initialise la valeur du dé à -1
		
		void lancer(){
			srand(time(NULL));
			val = rand()%6 + 1;
		}
		
		int getVal() const{
			return val;
		}
	
	private:
		int val; //valeur du de
	
	
	
	
	
};

#endif
