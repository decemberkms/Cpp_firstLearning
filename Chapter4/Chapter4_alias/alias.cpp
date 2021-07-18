#include <iostream>
#include <vector>
#include <cstdint>


int main()
{
	using namespace std;

	//typedef double distance_t; // std::int8_t i(97) << similar

	//double	    my_distance;
	//distance_t  home2work;
	//distance_t  home2school;


	vector<pair<string, int>> pairlist; // complex datatype	  - looks ugly so use typedef

	typedef vector<pair<string, int>>  pairlist_t;
	
	pairlist_t pairlist1;
	pairlist_t pairlist2;


	//alternative
	using pairlist_tt = vector<pair<string, int>>; // same as above


	return 0;
}