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
		//new shit!
		return someClassStructStruct;
	}
	void someThing()
	{
		return;
	}
};


//things are actually new in the latest version of VS!
int main()
{
	//damn man, this shit is fancy!
	
	std::cout << "hello world.";
	return 0;
}