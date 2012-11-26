#ifndef NO3_PRIMEFACTOR_H_
#define NO3_PRIMEFACTOR_H_

class PrimeFactor
{
public:
	PrimeFactor(long long number):mNumber(number) {};
	~PrimeFactor() {};
	int getLargest();

private:
	long long mNumber;
};

#endif /* NO3_PRIMEFACTOR_H_ */
