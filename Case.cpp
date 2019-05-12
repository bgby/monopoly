#include "Case.hpp"

int Case::next_id = 0;

Case::Case(){
	id = next_id++;
}