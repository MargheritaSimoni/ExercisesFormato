#include <iostream>

std::string reverseLetters(std::string S) {
    std::string::iterator l_iter = S.begin();
    std::string::iterator r_iter = S.end() - 1;

    while (l_iter < r_iter) {
        if (!std::isalpha(*l_iter)) {
            ++l_iter;
        }
        else if (!std::isalpha(*r_iter)) {
            --r_iter;
        }
        else {
            std::swap(*l_iter, *r_iter);
            ++l_iter;
            --r_iter;
        }
    }

    return S;
}

int main() {
    std::string S = "1ab2cd3ef4gh";
    std::string S_out = reverseLetters(S);
    std::cout << "Input string: " << S << std::endl << "Output string with reversed letters: " << S_out << std::endl;
    return 0;
}

