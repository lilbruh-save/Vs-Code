// 1 code no test
#include <iostream>
#include <iomanip>

int main() {
    double total = 0.0;
    double monomial = 0.0;
    char currentOp = '+';
    char op;
    double num;

    // Read the first number
    std::cin >> monomial;

    while (true) {
        // Read operator
        std::cin >> op;
        if (op == '=') {
            break;
        }

        // Read the next number
        std::cin >> num;

        if (op == '*') {
            monomial *= num;
        } else if (op == '/') {
            monomial /= num;
        } else if (op == '+' || op == '-') {
            // Handle the current monomial
            if (currentOp == '+') {
                total += monomial;
            } else if (currentOp == '-') {
                total -= monomial;
            }

            // Start new monomial
            monomial = num;
            currentOp = op;
        }
    }

    // Handle the last monomial
    if (currentOp == '+') {
        total += monomial;
    } else if (currentOp == '-') {
        total -= monomial;
    }

    std::cout << total << std::endl;

    return 0;
}

//code 2 to test

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

enum TokenType { Number, Operator, End };

struct Token {
    TokenType type;
    double value;
    char op;
};

class TokenStream {
public:
    Token getToken();
    void ungetToken(Token t);

private:
    bool hasToken = false;
    Token buffer;
};

TokenStream ts;

Token TokenStream::getToken() {
    if (hasToken) {
        hasToken = false;
        return buffer;
    }
    std::string s;
    while (std::cin >> s) {
        if (s == "=") {
            return {End, 0, 0};
        }
        if (s == "+" || s == "-" || s == "*" || s == "/") {
            return {Operator, 0, s[0]};
        }
        // Try to parse as number
        std::istringstream iss(s);
        double val;
        if (iss >> val) {
            return {Number, val, 0};
        } else {
            std::cerr << "Invalid token: " << s << std::endl;
            exit(1);
        }
    }
    return {End, 0, 0};
}

void TokenStream::ungetToken(Token t) {
    if (hasToken) {
        std::cerr << "Can't ungetToken() twice in a row" << std::endl;
        exit(1);
    }
    hasToken = true;
    buffer = t;
}

double expression();
double term();
double factor();

double factor() {
    Token t = ts.getToken();
    if (t.type == Number) {
        return t.value;
    } else {
        std::cerr << "Expected number" << std::endl;
        exit(1);
    }
}

double term() {
    double result = factor();
    while (true) {
        Token t = ts.getToken();
        if (t.type == Operator && (t.op == '*' || t.op == '/')) {
            double f = factor();
            if (t.op == '*') {
                result *= f;
            } else {
                result /= f;
            }
        } else if (t.type == End) {
            ts.ungetToken(t);
            break;
        } else {
            ts.ungetToken(t);
            break;
        }
    }
    return result;
}

double expression() {
    double result = term();
    while (true) {
        Token t = ts.getToken();
        if (t.type == Operator && (t.op == '+' || t.op == '-')) {
            double r = term();
            if (t.op == '+') {
                result += r;
            } else {
                result -= r;
            }
        } else if (t.type == End) {
            break;
        } else {
            ts.ungetToken(t);
            break;
        }
    }
    return result;
}

int main() {
    double result = expression();
    std::cout << result << std::endl;
    return 0;
}

