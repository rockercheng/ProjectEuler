#ifndef NO4_PALINDROMIC_H_
#define NO4_PALINDROMIC_H_

class Palindromic
{
public:
	Palindromic(int digit):mDigit(digit) {};
	~Palindromic() {};
	int getLargest();

private:
	int mDigit;
	bool isPalindromic(int number);
};


#endif /* NO4_PALINDROMIC_H_ */
