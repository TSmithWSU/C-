#include <memory>
#include <iostream>
using namespace std;


class Hen
{
public: 
	int id;
	double eggs; // average number of eggs laid by hen object per week

	Hen(int _id, double _eggs) : 
		id(_id), eggs(_eggs)
	{}

	~Hen()
	{
		cout << "Chicken soup!" << endl;
	}

};

auto getHen() -> unique_ptr<Hen>
{
	return make_unique<Hen>(1, 3.9);
}

auto updateHen(unique_ptr<Hen> hen) -> unique_ptr<Hen>
{
	hen->eggs += 1.8;
	return hen;
}




int main()
{
	auto sp = unique_ptr<int>(new int{ 123 });
	auto sp2 = make_unique<int>(123); 

	auto sp3 = getHen();
	//auto sp4 = sp3.release();
	auto sp5 = updateHen(move(sp3));

	//shared pointers

	auto sharedp = shared_ptr<int>();
	auto sharedp2 = make_shared<int>(123);
	auto sharedp3 = sharedp;
	//sharedp3.reset(new int{ 234 });

	int* ptr = sharedp2.get();

}