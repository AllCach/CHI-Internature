#include <string>
#include <fstream>
#include <iostream>
namespace l1 {
	class Txt {
	private:
		std::string file_name;
		std::string* str_arr;
		size_t Rows;
	public:
		Txt();
		Txt(const std::string& file_name);
		Txt(const Txt& other);
		Txt& operator= (const Txt& other);
		Txt(Txt&& other) noexcept;
		Txt& operator=(Txt&& other) noexcept;
		size_t size() const;
		~Txt();
	};
}