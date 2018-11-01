#include "hamming.h"

namespace hamming
{
int compute(const std::string& strandA, const std::string& strandB)
{
  const int aLength = strandA.length();
  const int bLength = strandB.length();

  if (aLength != bLength) {
    throw std::domain_error("The DNA strands must be the same length");
  }

  int delta = 0;
  for (int i = 0; i < aLength; i++) {
    if (strandA[i] != strandB[i]) {
      delta++;
    }
  }
  
  return delta;
}
}