#pragma once
#include <string>
#include <iostream>
using namespace std;

class Smartphone {
private:
	string model, manufacturer, color, display, ram, storage, cpu, os, protection;
	short ncams;
	double price;
public:
	Smartphone();
	Smartphone(string model, double price, string manufacturer,
		string color, string display, string ram,
		string storage, string cpu, string os, short ncams, string protection);
	string getModel() const;  string getManufacturer() const;
	string getColor() const;  string getDisplay() const;
	string getRAM() const;    string getStorage() const;
	string getCPU() const;    string getOS() const;
	double getPrice() const;  string getProtection() const;
	void setPrice(double price); short getNCams() const;
	void Print() const;
	Smartphone& operator=(const Smartphone& other);
};
