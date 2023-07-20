// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

// My solution

#include <string>

std::string removeExclamationMarks(std::string str)
{
  std::string clean = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '!')
    {
      continue;
    }
    clean = clean + str[i];
  }
  return clean;
}