#include <iostream>
#include <array>
#include <vector>

/**
 * Loops through an array and passes each element of the array as argument to a function
 * Works for std::array and std::vector
 * @param (array, function)
 * @return void
 * */
template <typename T, typename lambda>
void forEach(T &array, const lambda &func)
{
  for (auto &element : array)
  {
    func(element);
  }
}

int main()
{
  std::array<int, 5> array = {1, 2, 3, 4, 5};
  forEach(array, [](const auto &element) {
    std::cout << element << std::endl;
  });

  std::vector<int> array2 = {5, 4, 3, 2, 1};
  forEach(array2, [](const auto &element) {
    std::cout << element << std::endl;
  });
}