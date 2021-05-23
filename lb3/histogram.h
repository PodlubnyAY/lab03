#ifndef HISTOGRAM_H_INCLUDED
#define HISTOGRAM_H_INCLUDED
#include <vector>

using namespace std;

void find_minmax(const vector<double> numbers, double& min, double& max);
struct Input {
    vector<double> numbers;
    size_t bin_count;
};

void
show_histogram_text(const vector<size_t>& bins);
vector<size_t> make_histogram(const vector<double>& numbers, size_t bin_count);




#endif // HISTOGRAM_H_INCLUDED
