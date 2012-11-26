#ifndef NO5_DIVISIBLE_H_
#define NO5_DIVISIBLE_H_

class Divisible
{
public:
	Divisible(int divNum):mDivNum(divNum) {};
	~Divisible() {};
	int getSmallest();

private:
	int mDivNum;
};


#endif /* NO5_DIVISIBLE_H_ */
