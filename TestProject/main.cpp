#include <string.h>
#include <iostream>

struct someGlobalStruct
{
	int someDumbNumber;
};

class someClass
{
	struct someClassStruct
	{
		int someClassStructInt;
		bool someClassStructBool;
	};
	int someClassInt;
	bool someClassbool;
	someClassStruct someClassStructStruct;
public:
	someClass()
	{
		someClassStructStruct = someClassStruct();
	}
	~someClass();
	someClassStruct getClassStruct()
	{
		return someClassStructStruct;
	}
};

int main()
{
	int someInt = 0;
	
	std::cout << "hello world.";
	return 0;
}