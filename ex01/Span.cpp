#include "Span.hpp"

Span::Span()
{
    N = 5;
    count = 0;
}

Span::~Span()
{}



Span::Span(unsigned int N)
{
    this->N = N;
    count = 0;
}

Span::Span(const Span &other)
{
    N = other.N;
    count = other.count;
}
Span &Span::operator=( const Span &other)
{
    N = other.N;
    count = other.count;
    return(*this);
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
    std::sort(numbers.begin(), numbers.end());
    return(numbers[count - 1]-numbers[0]);
}

int Span::shortestSpan()
{
    int result = 0;
    int finalresult = 2147483647;
    if (numbers.empty() || count == 1) 
        throw std::invalid_argument("Container is empty");
    std::sort(numbers.begin(), numbers.end());
    for (unsigned int i = 0; i < count - 1; i++)
    {
        result = numbers[i + 1] - numbers[i];
        if (result < finalresult)
            finalresult = result;
    }
    return (finalresult);
}


void Span::fill(void)
{
    srand(time(NULL));
    //int i = 0;
    int j;
    while (count < N)
    {
        j = rand();
        addNumber(j);
        //i++;
        //std::cout << "-----> j  = " << j << " && count = "<< count << std::endl;
    }
    //std::cout << i << std::endl;
    return;
}