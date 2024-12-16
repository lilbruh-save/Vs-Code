#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void HideAndSeek(std::string name) {
    std::cout << "Водит " << name << std::endl;
    std::cout << "Закрыть глаза" << std::endl;
    
    for (int i = 1; i <= 100; ++i) {
        std::cout << i << std::endl;
    }

    std::cout << "Открыть глаза и идти искать" << std::endl;
    std::cout << "Игра закончилась" << std::endl;
}

class UTF8CodePage {
  public:
    UTF8CodePage() : m_old_code_page(::GetConsoleOutputCP()) {
      ::SetConsoleOutputCP(CP_UTF8);
    }
    ~UTF8CodePage() { ::SetConsoleOutputCP(m_old_code_page); }

  private:
    UINT m_old_code_page;
};

int main() {
  UTF8CodePage use_utf8;

  std::vector<std::string> lead_players{"Маша", "Саша", "Таня"};
    
    for (auto player: lead_players) {
        HideAndSeek(player);
    }
} 
