#include "Interface.h"

#ifdef VECTOR_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif

class Vector : VectorInterface {
private:
	double x;
	double y;
public:
	Vector(void);
	Vector(double, double);
	virtual double angle(void);
	virtual double length(void);
	virtual void print(void);
};

extern "C" LIB_API Vector* createVector(double, double);