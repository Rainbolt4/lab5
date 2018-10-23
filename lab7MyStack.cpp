//lab7MyStack.cpp
//dominic rainbolt
//function delcarations for MyStack
// a simple "Stack" implementation using a vector;
#include "Lab7MyStack.h"


void MyStack::push(char & c) {
	data.push_back(c);
}

char MyStack::pull() {
		char c;
		c = data.back();
		data.pop_back();
		return c;
	}

