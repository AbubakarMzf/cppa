#include <iostream>


std::string isPrime(int nb)
{
  if (nb <= 1)
    return " is a prime: False\n";
  if (nb <= 3)
    return nb + " is a prime: True\n";
  if (nb % 2 == 0 || nb % 3 == 0)
    return  " is a prime: False\n";
  for(int i = 5; i * i <= nb; i += 6)
  {
      if (nb % i == 0 || nb % (i + 2) == 0)
        return " is a prime: False\n";
  }
  return " is a prime: True\n";
}


int main(int argc, char * argv[]) {
  for (int i = 1; i < argc; i++){
    std::cout << argv[i] << isPrime(atoi(argv[i]));
  }
}