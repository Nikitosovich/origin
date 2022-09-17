#include "Counter.h"

Counter::Counter() :count(1)
{}

Counter::Counter(int count) {
	this->count = count;
}

void Counter::inc_count() {
	count++;
}

void Counter::dec_count()
{
	count--;
}
int Counter::get_count()
{
	return count;
}
