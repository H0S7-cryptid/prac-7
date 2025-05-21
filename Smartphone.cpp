#include "Smartphone.h"

Smartphone::Smartphone() {
	this->model = "";
	this->manufacturer = "";
	this->display = "";
	this->storage = "";
	this->os = "";
	this->price = 0;
	this->color = "";
	this->ram = "";
	this->cpu = "";
	this->protection = "";
	this->ncams = 0;
}

Smartphone::Smartphone(string model, double price, string manufacturer,
	string color, string display, string ram,
	string storage, string cpu, string os, short ncams, string protection) {
	this->model = model;
	this->price = price;
	this->manufacturer = manufacturer;
	this->color = color;
	this->display = display;
	this->ram = ram;
	this->storage = storage;
	this->cpu = cpu;
	this->os = os;
	this->protection = protection;
	this->ncams = ncams;
}

Smartphone& Smartphone::operator=(const Smartphone& other) {
	if (this != &other) { // Проверка на самоприсваивание
		model = other.model;
		price = other.price;
		manufacturer = other.manufacturer;
		color = other.color;
		display = other.display;
		ram = other.ram;
		storage = other.storage;
		cpu = other.cpu;
		os = other.os;
		ncams = other.ncams;
		protection = other.protection;
	}
	return *this;
}

string Smartphone::getModel() const {
	return model;
}

string Smartphone::getColor() const {
	return color;
}

string Smartphone::getCPU() const {
	return cpu;
}

string Smartphone::getDisplay() const {
	return display;
}

string Smartphone::getManufacturer() const {
	return manufacturer;
}

string Smartphone::getOS() const {
	return os;
}

double Smartphone::getPrice() const {
	return price;
}

string Smartphone::getRAM() const {
	return ram;
}

string Smartphone::getStorage() const {
	return storage;
}

string Smartphone::getProtection() const {
	return protection;
}

short Smartphone::getNCams() const {
	return ncams;
}

void Smartphone::setPrice(double price) {
	try {
		if (price > 4000000) throw exception("Incorrect price value!");
		this->price = 0;
	}
	catch (exception& e) {
		cout << e.what() << endl;
		return;
	}
	this->price = price;
}

void Smartphone::Print() const {
	std::cout << manufacturer << std::endl;
	std::cout << model << std::endl;
	std::cout << "Price: " << price << std::endl;
	std::cout << "Color: " << color << std::endl;
	cout << "Display: " << display << std::endl;
	std::cout << "OS: " << os << std::endl;
	std::cout << ram << "Gb RAM, " << storage << " GB storage" << std::endl;
	std::cout << "CPU: " << cpu << std::endl;
	std::cout << "Protection: " << protection << std::endl;
	std::cout << "Number of Cameras: " << ncams << std::endl;
}
