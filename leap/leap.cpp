#include "leap.h"

namespace leap
{
bool is_leap_year(int year)
{

  if (year % 4 == 0)
  {
    bool div_by_100 = year % 100 == 0;
    bool div_by_400 = year % 400 == 0;

    return !div_by_100 || (div_by_100 && div_by_400);
  }

  return false;
}
} // namespace leap