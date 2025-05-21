#pragma once
#include<string>
#include<list>
#include"Smartphone.h"
using namespace std;

class Catalog {
private:
    list<Smartphone> smartphones;
public:
    void addSmartphone(string model, double price, string manufacturer,
        string color, string display, string ram,
        string storage, string cpu, string os, short ncams, string protection);
    void addSmartphone(const Smartphone& phone);
    void addSmartphone(Smartphone&& phone);
    Smartphone getSmartphone(string model);
    Smartphone search(const Smartphone& searchSmartphone);
    Smartphone search(string model, string manufacturer);
};
