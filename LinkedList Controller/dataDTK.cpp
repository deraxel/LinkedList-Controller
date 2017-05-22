#include. "dtatDTK.h"



int DataDTK::getItem1() const{
	return item;
}

void DataDTK::setItem1(int const itemIn){
	item=itemIn;
}

DataDTK(int const lastSerial){
	serial=lastSerial;
}