#ifndef NO1_MULTIPLE_H_
#define NO1_MULTIPLE_H_

class Multiple
{
	public:
		Multiple(int member1, int member2, int upper)
				: mMember1(member1), mMember2(member2), mUpper(upper)
		{};
		~Multiple() {};
		int getSum();

	private:
		Multiple();
		int mMember1;
		int mMember2;
		int mUpper;
};

#endif /* NO1_MULTIPLE_H_ */
