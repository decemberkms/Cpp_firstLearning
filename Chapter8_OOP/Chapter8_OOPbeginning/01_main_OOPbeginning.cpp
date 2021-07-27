#include <iostream>
#include <string>
#include <vector>

using namespace std;


// object
class Friend 
{
public:   //access specifier  public private protected          --struct doessn't have this
	string m_name;
	string m_age;
	double height;
	double weight;

	void printFriend()
	{
		cout << m_name << " " << m_age << " " << height << " " << weight << endl;
	}

};

int main()
{
	Friend jj{ "Min", "33", 178, 75 }; //instanciation  
	Friend zz{ "Zin", "23", 158, 35 };  
	jj.printFriend(); // instance
	zz.printFriend();

	// Friend does not have address . it's a frame

	vector<Friend> my_friends;

	my_friends.resize(10);

	
	for (auto& ele : my_friends)
	{
		ele.printFriend();
	}
		


	return 0;
}