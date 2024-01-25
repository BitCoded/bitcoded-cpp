#include "bitcoded.hpp"

void print(std::string text)
{
	std::cout << text;
}

void println(std::string text, bool shouldFlush)
{
  if (shouldFlush)
    std::cout << text << std::endl;
  else
    std::cout << text << "\n";
}

void println(std::string text)
{
  println(text, false);
}

