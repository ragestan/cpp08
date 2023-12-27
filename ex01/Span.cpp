#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->N = N;
    count = 0;
}

void Span::addNumber(int i)
{
    if (count == N)
    {
        try {
            throw std::out_of_range("Span already full");
        } catch (const std::out_of_range& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
    else
    {
        numbers.push_back(i);
        count++;
    }
}

int Span::longestSpan()
{
    if (numbers.empty() || count == 1) 
        throw std::invalid_argument("Container is empty");
    return(std::max_element(numbers.begin(), numbers.end()) - std::min_element(numbers.begin(), numbers.end()));
}

