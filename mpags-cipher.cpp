#include <iostream>
#include <string>

int main()
{

std::string msg;
char in_char{'x'};
while ( std::cin >> in_char)
   {
      if (isalpha(in_char))
         {
            msg += toupper(in_char);//<< std::endl;
         }
      else
         {
            switch(in_char)
               {
                  case '0' : msg += "ZERO";
                     break;
                  case '1' : msg += "ONE";
                     break;
                  case '2' : msg += "TWO";
                     break;
                  case '3' : msg += "THREE";
                     break;
                  case '4' : msg += "FOUR";
                     break;
                  case '5' : msg += "FIVE";
                     break;
                  case '6' : msg += "SIX";
                     break;
                  case '7' : msg += "SEVEN";
                     break;
                  case '8' : msg += "EIGHT";
                     break;
                  case '9' : msg += "NINE";
                     break;
               }
         }
   }

std::cout << msg << std::endl;
return 0;
}

