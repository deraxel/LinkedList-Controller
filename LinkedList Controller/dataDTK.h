#pragma once

class DataDTK{
public:
	DataDTK(int const lastSerial);
	int getItem1() const;
	void setItem1(int const itemIn);
	DataDTK* next;
	DataDTK* last;
private:
	int item;
protected:
	int serial;
};