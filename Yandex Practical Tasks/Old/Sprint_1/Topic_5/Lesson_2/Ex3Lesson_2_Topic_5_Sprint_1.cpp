#include <iostream>
#include <string>

void PrintCenter(std::string str, std::size_t width) {
    if (width < str.size()) {
        std::cout << str.substr(0, width) << std::endl;
    } else {
        auto filler_length = width - str.size();
        auto prefix_length = filler_length / 2;
        const char k_filler = '=';

        std::string prefix(prefix_length, k_filler);
        std::string postfix(filler_length - prefix_length, k_filler);

        std::cout << prefix << str << postfix << std::endl;
    }
}

void PrintCenterMultiline(std::string str, std::size_t width) {
    size_t previous = 0;
    for (size_t i = str.find('#'); i != str.npos; i = str.find('#', i + 1)) {
        PrintCenter(str.substr(previous, i - previous), width);
        previous = i + 1;
    }
    PrintCenter(str.substr(previous), width);
}

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::size_t width;
    std::cin >> width;

    PrintCenterMultiline(str, width);
}