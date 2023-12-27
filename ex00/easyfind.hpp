#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>

void easyfind(T &t,int n)
{
    if(std::find(t.begin(),t.end(),n)!= t.end())
        std::cout<<"The value " << n <<" has been found"<<std::endl;
    else
        try {
            throw std::out_of_range("Value not found in the container");
        } catch (const std::out_of_range& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }