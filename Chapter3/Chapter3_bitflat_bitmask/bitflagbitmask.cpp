#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//bool item1_flag = false;  too many variables!!!
	//bool item2_flag = false;
	//bool item3_flag = false;
	//bool item4_flag = false;

	////event!
	//item1_flag = true;

	////die!
	//item2_flag = false;
	//if (item2_flag == true)
	//{
	//	//event!
	//}
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;


	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;
		
	unsigned char items_flag = 0;

	cout << "No item: " << bitset<8>(items_flag) << endl; // 8 items = 8 bits - one byte

	// item0 on
	items_flag |= opt0; 
	cout << "item 0 got: " << bitset<8>(items_flag) << endl; // 8 items = 8 bits - one byte

	// item3 on
	items_flag |= opt3;
	cout << "item 3 got: " << bitset<8>(items_flag) << endl; // 8 items = 8 bits - one byte

	// lost items3
	items_flag &= ~opt3;
	cout << "lost item 3 : " << bitset<8>(items_flag) << endl; // 8 items = 8 bits - one byte
	cout << "Item flag " << bitset<8>(items_flag) << endl;
	cout << "What is this? " << bitset<8>(items_flag & opt1) << endl;
	cout << "What is this? " << (items_flag & opt1) << endl;
	// check item1
	if (items_flag & opt1)
	{
		cout << "has item 1" << endl;
	}
	else { cout << "Not have item 1" << endl; }
	cout << "Item flag " << bitset<8>(items_flag) << endl;
	//cout << "What is this? " << bitset<8>(items_flag & opt0) << endl;

	cout << "What is this? " << bitset<8>(items_flag & opt0) << endl;
	cout << "What is this? " << (items_flag & opt0) << endl;

	if (items_flag & opt0)
	{
		cout << "has item 0" << endl;
	}

	//obtain item 2,3


	items_flag |= (opt2 | opt3);
	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl;


	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		//items_flag ^= opt2;
		//items_flag ^= opt1;
		items_flag ^= (opt2 & opt1);
	}

	cout << bitset<8>(items_flag) << endl;

	cout << endl;
	cout << "Bit mask!!!" << endl;
	cout << endl;

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	
	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;


	unsigned int pixel_color = 0xDAA520;

	cout << std::bitset<32>(pixel_color) << endl;
	
	unsigned char blue = pixel_color & blue_mask; 
	unsigned char green = (pixel_color & green_mask) >> 8;
	unsigned char red = (pixel_color & red_mask) >> 16;

	cout << "Blue: " <<  std::bitset<8>(blue) << " " << int(blue) << endl;
	cout << "Green: " << std::bitset<8>(green) << " " << int(green) << endl;
	cout << "Red: " << std::bitset<8>(red) << " " << int(red) << endl;


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "Practise!" << endl;


	if (opt0 & opt3)
	{
		cout << "It's true" << endl;
	}
	else 
	{
		cout << "It's false" << endl; 
	}


	return 0;
}