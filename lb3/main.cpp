#include <iostream>
#include <vector>
#include "histogram.h"
#include "svg.h"
#include <windows.h>

using namespace std;


int
main()
{
    DWORD WINAPI GetVersion(void);

    DWORD info = GetVersion();
    DWORD mask = 0b00000000'00000000'11111111'11111111;
    DWORD version = info & mask;;
    DWORD platform = info >> 16;
    DWORD maska = 0b00000000'11111111;
    if ((info & 0x40000000) == 0)
        {
        DWORD version_major = version & maska;
        DWORD version_minor = version >> 8;
        DWORD build = platform;
        printf("Windows v%u.%u (build %u)", version_major, version_minor, build);
    }
    return 0;

    size_t number_count;
    cerr << "Enter number count: ";
    cin >> number_count;

    const auto numbers = input_numbers(number_count);

    size_t bin_count;
    cerr << "Enter column count: ";
    cin >> bin_count;

    const auto bins = make_histogram(numbers, bin_count);

    show_histogram_svg(bins);

    return 0;
}
