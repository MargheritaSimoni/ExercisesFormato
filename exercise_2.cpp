#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
double mediana(const std::vector<T>& vec1, const std::vector<T>& vec2) {

    std::vector<T> merged_vec((int)vec1.size() + (int)vec2.size());
    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), merged_vec.begin());

    if (merged_vec.size() % 2 == 0) {
        double upper = static_cast <double> (merged_vec[merged_vec.size() / 2]);
        double lower = static_cast <double> (merged_vec[merged_vec.size() / 2 - 1]);
        double mediana = (upper + lower) / 2.0;
        return mediana;
    } else {
        double mediana = static_cast <double> (merged_vec[merged_vec.size() / 2]);
        return mediana;
    }
}


int main() {
    std::vector<int> vec1 = {2, 3, 4};
    std::vector<int> vec2 = {1, 5, 6};
    std::cout << "Mediana: " << mediana(vec1, vec2) << std::endl;
    return 0;
}
