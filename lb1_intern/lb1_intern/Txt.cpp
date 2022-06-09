#include "Txt.h"
using namespace l1;

Txt::Txt() {
    str_arr = nullptr;
    Rows = 0;
}

Txt::Txt(const std::string& file_name) {
    Rows = 0;
    std::ifstream ifs;
    ifs.open(file_name);
    std::string str;
    while (std::getline(ifs, str)) {
        Rows++;
    }
    ifs.close();
    ifs.open(file_name);
    str_arr = new std::string[Rows];
    for (int i = 0; i < Rows; i++)
    {
        getline(ifs, str_arr[i]);
    }
    ifs.close();
}

Txt::Txt(const Txt& other) {
    this->Rows = other.Rows;
    str_arr = new std::string[Rows];
    for (int i = 0; i < Rows; i++) {
        this->str_arr[i] = other.str_arr[i];
    }

}

Txt& Txt::operator= (const Txt& other) {
    this->Rows = other.Rows;
    str_arr = new std::string[Rows];
    for (int i = 0; i < Rows; i++) {
        this->str_arr[i] = other.str_arr[i];
    }
    return *this;
}

Txt::Txt(Txt&& other) noexcept {
    this->Rows = other.Rows;
    this->str_arr = other.str_arr;
    other.Rows = 0;
    other.str_arr = nullptr;
}

Txt& Txt::operator=(Txt&& other) noexcept {
    this->Rows = other.Rows;
    this->str_arr = other.str_arr;
    other.Rows = 0;
    other.str_arr = nullptr;
    return *this;
}

size_t Txt::size() const {
    return Rows;
}

Txt::~Txt() {
    delete[] str_arr;
}