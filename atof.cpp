#include <iostream>
using namespace std;

bool isDigit(char ch)
{
  bool isdigit = false;
  int integer = ch - '0';
  for (int i = 0; i <= 9; i++)
  {
    if (integer == i)
      isdigit = true;
  }
  return isdigit;
}

double pow(double base, double exponent)
{
  double result = 1;
  if (exponent == 0)
    result = 1;
  if (exponent == 1)
    result = base;
  else
  {
    for (int i = 0; i < exponent; i++)
      result *= base;
  }
  return result;
}
double parseIntegralPart(char *str, int &index)
{
  double integralPart = 0;
  while (str[index] != '\0' && str[index] != '.')
  {
    if (isDigit(str[index]))
    {
      integralPart = integralPart * 10 + (str[index] - '0');
      index++;
    }
    else
      break;
  }
  return integralPart;
}
double parseDecimalPart(char *str, int &index)
{
  double decimalPart = 0.0;
  double multiplicationFactor = 0.1;
  int count = 1;

  while (str[index] != '\0' && str[index] != '.')
  {
    if (isDigit(str[index]))
    {
      decimalPart = decimalPart + (str[index] - '0') * pow(multiplicationFactor, count);
      count++;
      index++;
    }
    else
      break;
  }
  return decimalPart;
}

double userDefinedAtof(char *str)
{
  int sign = 1;
  double integralPart = 0;
  double decimalPart = 0;
  double result = 0;
  int index = 0;

  if (str[0] == '-')
  {
    sign = -1;
    index++;
  }
  if (!isDigit(str[index]))
  {
    return 0;
  }
  integralPart = parseIntegralPart(str, index);

  if (str[index] == '.')
  {
    index++;
    decimalPart = parseDecimalPart(str, index);
  }

  return sign * (integralPart + decimalPart);
}

int main()
{

  char str[100]{};
  cout << "Enter a string" << '\n';
  cin >> str;
  double result = userDefinedAtof(str);
  cout << "Coverted to float by user defined:" << result << '\n';
  cout << "Converted to float by predined:" << atof(str) << '\n';
}
