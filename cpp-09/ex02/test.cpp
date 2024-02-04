#include <iostream>
#include <vector>
#include <deque>

template <template < class , class > class Container,  class T, class Alloc = std::allocator<T> >
void Element(const Container<T, Alloc >& container) {

    std::cout << "First element: " << container.begin()->first<< "\nSecond element: " <<  container.begin()->second << std::endl;
    Container<int, std::allocator<int> > vec;

    vec.push_back(45);
    std::cout << *vec.begin() << std::endl;

}

int main() {
    std::deque<std::pair<int , int> > numbers;
    numbers.push_back(std::make_pair(0, 10));
    numbers.push_back(std::make_pair(20, 30));
    numbers.push_back(std::make_pair(40, 50));

    
    Element(numbers);
    std::cout << "trtrttrtr\n";
    return 0;
}
