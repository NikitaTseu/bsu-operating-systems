#include <objbase.h>

interface VectorInterface {
	virtual double angle(void) = 0;
	virtual double length(void) = 0;
	virtual void print(void) = 0;
};