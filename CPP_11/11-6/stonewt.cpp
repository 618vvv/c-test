// stonewt.cpp -- Stonewt methods

#include <iostream>

using std::cout;

using std::endl;

#include "stonewt.h"

void Stonewt::update()
{
   if (ft == STONES) {
		stone = total;
		pds_left = (int)stone * Lbs_per_stn;
		pounds = stone * Lbs_per_stn;
	}
	else if (ft == IPOUND) {
		pds_left = total;
		stone = double(pds_left / Lbs_per_stn);
		pounds =pds_left;

	}
	else {
		pounds = total;
		stone = pounds / Lbs_per_stn;
		pds_left = int(pounds);
	}
}
 //构造函数
Stonewt::Stonewt(double total_s,format a)
{
    total=total_s;
    ft=a;
    update();  //调用更新函数
}
//析构函数
Stonewt::~Stonewt()
{

}
//运算符重载
Stonewt Stonewt::operator+(double a)
{
	Stonewt b(total+a,ft);
	return b;
}
Stonewt Stonewt::operator-(double a)
{
	Stonewt b(total-a,ft);
	return b;
}
Stonewt Stonewt::operator*(double a)
{
	Stonewt b(total*a,ft);
	return b;
}
//友元函数
Stonewt operator+(double n,Stonewt &a)
{	Stonewt b(n+a.total,a.ft);
	return b;
}
Stonewt operator-(double n,Stonewt &a)
{
	Stonewt b(n-a.total,a.ft);
	return b;
}
Stonewt operator*(double n,Stonewt &a)
{
	Stonewt b(n*a.total,a.ft);
	return b;
}
std::ostream & operator<<(std::ostream &os,Stonewt &a)
{
	 if (a.ft == Stonewt::STONES) {
		os<<a.stone<<endl;
	}
	else if (a.ft == Stonewt::IPOUND) {
		os<<a.pds_left<<endl;
	}
	else {
		os<<a.pounds<<endl;
	}
	return os;
}
 bool Stonewt::operator<(Stonewt &a)
 {
	return pounds<a.pounds;
 }
bool Stonewt::operator>(Stonewt &a)
{
	return pounds>a.pounds;

}
bool Stonewt::operator<=(Stonewt &a)
{
	return pounds<=a.pounds;

}
bool Stonewt::operator>=(Stonewt &a)
{
	return pounds>=a.pounds;

}
bool Stonewt::operator!=(Stonewt &a)
{
	return pounds!=a.pounds;

}
bool Stonewt::operator==(Stonewt &a)
{
	return pounds==a.pounds;

}