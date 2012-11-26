#ifndef NO12_TRIANGLENUMBER_H_
#define NO12_TRIANGLENUMBER_H_

class TriangleNumber
{
public:
	TriangleNumber (){};
	int getTriNumByFactor (int numOfFactor);
	int getTriNumBySeq (int seq);
private:
	int getNumOfFactor(int triNum);
};


#endif /* NO12_TRIANGLENUMBER_H_ */
