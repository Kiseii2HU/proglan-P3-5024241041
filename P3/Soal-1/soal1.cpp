#include <iostream>
#include <string>

class Karakter {
protected:
    std::string nama;
    std::string elemen;
public:
    Karakter() {}
        Karakter(std::string n, std::string e) : nama(n), elemen(e) {}
};

class BintangEmpat : virtual public Karakter {
protected:
    int rarity;
public:
    BintangEmpat() {}
    BintangEmpat(std::string n, std::string e, int r) : Karakter(n, e), rarity(r) {}
};

class BintangLima : virtual public Karakter {
protected:
    int rarity;
public:
    BintangLima() {}
    BintangLima(std::string n, std::string e, int r) : Karakter(n, e), rarity(r) {}
};

class WishResult : public BintangEmpat, public BintangLima {
    std::string idWish;
    int primogem;
    std::string status;
    int rarityFinal;
public:
    WishResult(std::string n, std::string e, int r, std::string id, int p, std::string s) {
        nama = n;
        elemen = e;
        idWish = id;
        primogem = p;
        status = s;
        rarityFinal = r;
        if (r == 4) {
            BintangEmpat::rarity = r;
        } else {
            BintangLima::rarity = r;
        }
    }

    void printInfo() {
        std::cout << "Nama: " << nama << ", Elemen: " << elemen << ", Rarity: " << rarityFinal << ", Wish ID: " << idWish << ", Primogem: " << primogem << ", Status: " << status << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string nama, elemen, idWish, status;
        int rarity, primogem;
        std::cin >> nama >> elemen >> rarity >> idWish >> primogem >> status;
        if (rarity != 4 && rarity != 5) {
            std::cout << "Input rarity hanya boleh 4 atau 5!" << std::endl;
            continue;
        }
        WishResult w(nama, elemen, rarity, idWish, primogem, status);
        w.printInfo();
    }
    return 0;
}
