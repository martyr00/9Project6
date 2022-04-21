#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<double> get_vector_from_file(ifstream& array) {
    vector<double> numbers;

    double numb;

    while (!array.eof()) {
        array >> numb;

        numbers.push_back(numb);
    }

    return numbers;
}

double get_sum(const vector<double>& array) {
    double sum_numb = 0;

    for(double i : array)
        sum_numb += i;

    return sum_numb;
}

int main() {
    ifstream in;

    in.open("1.txt");

    if(!in.is_open())
        cout << "Error";

    vector<double> numbers = get_vector_from_file(in);

    cout << "The sum of numbers: " << get_sum(numbers) << endl;

    return 0;
}
