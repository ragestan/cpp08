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
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &other);
        Span& operator=( const Span &other);
        void addNumber(int i);
        int longestSpan();
        int shortestSpan();
        void fill(void);
};