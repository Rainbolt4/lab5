//Lab7MyStack.h
//Dominic Rainbolt
//Lab5 assignment all files called lab 7 per instructions
//header file for class MyStack as well as functions to be used for the main program.
#ifndef Lab7MyStack_h
#define Lab7MyStack_h


#include <stack>
#include <iomanip>
#include <String>
#include <vector>
#include <list>

using namespace std;


//----------------------------------Class header--------------------------------
class MyStack {
public:

	void push(char & c);
	char pull();

private:
	//vector<char> data;
	list<char> data;
};

#endif // !Lab7MyStack_h
