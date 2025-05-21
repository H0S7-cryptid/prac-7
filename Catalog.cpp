#include "Catalog.h"

void Catalog::addSmartphone(string model, double price, string manufacturer,
    string color, string display, string ram,
    string storage, string cpu, string os, short ncams , string protection) {
    smartphones.push_back(Smartphone{ model, price, manufacturer,
      color, display, ram,
      storage, cpu, os, ncams , protection });
}

void Catalog::addSmartphone(const Smartphone& phone){
    smartphones.push_back(phone);
}

void Catalog::addSmartphone(Smartphone&& phone) {
    smartphones.push_back(std::move(phone));
}

Smartphone Catalog::getSmartphone(string model) {
    for (Smartphone s : smartphones) {
        if (s.getModel() == model)  return s;
    }  return Smartphone();
}

Smartphone Catalog::search(const Smartphone& searchSmartphone) {
    int bestScore = -1;
    Smartphone bestCandidate;

    for (const Smartphone& s : smartphones) {
        int score = 0;

        {
            if (!searchSmartphone.getModel().empty() && searchSmartphone.getModel() == s.getModel())
                score++;

            if (!searchSmartphone.getManufacturer().empty() && searchSmartphone.getManufacturer() == s.getManufacturer())
                score++;

            if (!searchSmartphone.getColor().empty() && searchSmartphone.getColor() == s.getColor())
                score++;

            if (!searchSmartphone.getDisplay().empty() && searchSmartphone.getDisplay() == s.getDisplay())
                score++;

            if (!searchSmartphone.getRAM().empty() && searchSmartphone.getRAM() == s.getRAM())
                score++;

            if (!searchSmartphone.getStorage().empty() && searchSmartphone.getStorage() == s.getStorage())
                score++;

            if (!searchSmartphone.getCPU().empty() && searchSmartphone.getCPU() == s.getCPU())
                score++;

            if (!searchSmartphone.getOS().empty() && searchSmartphone.getOS() == s.getOS())
                score++;

            if (!searchSmartphone.getProtection().empty() && searchSmartphone.getProtection() == s.getProtection())
                score++;

            if (searchSmartphone.getNCams() == s.getNCams())
                score++;
        }

        if (score > bestScore) {
            bestScore = score;
            bestCandidate = s;
        }
    }

    return bestCandidate;
}

Smartphone Catalog::search(string model, string manufacturer) {
    int bestScore = -1;
    Smartphone bestCandidate;
    for (const Smartphone& s : smartphones) {
        int score = 0;

        {
            if (!model.empty() && model == s.getModel()) score++;

            if (!manufacturer.empty() && manufacturer == s.getManufacturer()) score++;
        }

        if (score > bestScore) {
            bestScore = score;
            bestCandidate = s;
        }
    }
    return bestCandidate;
}
