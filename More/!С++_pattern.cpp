#include <Windows.h>
#include <iostream>

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
}
