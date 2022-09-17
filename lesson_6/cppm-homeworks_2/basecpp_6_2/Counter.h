#pragma once

class Counter
{
private:
	int count;
public:
	Counter();
	Counter(int count);

	void inc_count();

	void dec_count();

	int get_count();

};
