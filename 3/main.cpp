#include "Alpha.hpp"

Alpha::Alpha(char *s){
    set = 0;
    while(*s){
        set |= (1 << (tolower(*s) - 'a'));
        s++;
    }
}

Alpha Alpha::operator~(){
    Alpha result;
    result.set = ~set;
    return result;
}

Alpha Alpha::operator^(const Alpha& other) {
    Alpha result;
    result.set = (set ^ other.set);
    return result;
}

std::ostream& operator<<(std::ostream& os, const Alpha& set) {
    unsigned bit = 1;
    for (int i = 0; i < 26; i++) {
        if ((set.set & bit) > 0) {
            os << (char)('a' + i);
        }
        bit = bit << 1;
    }
    return os;
}

int main(int argc, char **argv) {

    if (argc < 3) return -1;

    Alpha set1(argv[1]);
    Alpha set2(argv[2]);

    Alpha result = ~(set1 ^ set2);
    std::cout << "Result: " << result << std::endl;

    return 0;
}