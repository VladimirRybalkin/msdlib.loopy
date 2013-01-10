/**
 * @author Thomas Fischer
 * @since 09.01.2013
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include "interface.h"
#include "port.h"

class component {
private:
	// connection interface
	inter *interface;

	// port pointer array
	por *ports[];

public:
	// setup interface and ports
	void setup(inter *i, por *p[], int n) {
		interface = i;
//		ports = &p;

		i->setup();
		int j;
		for(j = 0; j < n; j++) {
			p[j]->setup();
		}
	}
};

#endif /* COMPONENT_H_ */