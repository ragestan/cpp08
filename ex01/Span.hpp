#pragma once
#include <algorithm>
#include <iostream>
#include <vector>

class Span{
    private:
        std::vector<int> numbers;
        unsigned int N;
        unsigned int count;
    public:
        Span(unsigned int N);
        void addNumber(int i);
        int longestSpan();
        int shortestSpan();
};