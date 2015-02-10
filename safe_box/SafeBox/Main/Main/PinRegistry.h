/*
 * PinRegistry.h
 *
 * Created: 12/11/2014 4:05:53 PM
 *  Author: alexis.matelin
 */ 


#ifndef PINREGISTRY_H_
#define PINREGISTRY_H_

class PinRegistry {
	public:
		static const unsigned int BUTTON1 = 14;
		static const unsigned int BUTTON2 = 15;
		
		static const unsigned int LOCK = 16;
		
		static const unsigned int ANODES[8];
		static const unsigned int CATHODES[4];
		
	};

const unsigned int PinRegistry::ANODES[8] = {1,2,3,4,5,6,7,8};
const unsigned int PinRegistry::CATHODES[4] = {12, 11, 10, 9};



#endif /* PINREGISTRY_H_ */