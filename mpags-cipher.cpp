#include <iostream>
#include <string>

int main()
{

std::string msg;
char in_char{'x'};
while ( std::cin >> in_char)
   {
      if (in_char >= 'a' && in_char <='z')
         {
            msg = char(toupper(in_char));//<< std::endl;
         }
      else if (in_char >='0' && in_char <='9')
         {
            switch(in_char)
               {
                  case '0' : msg = "ZERO";
                     break;
                  case '1' : msg = "ONE";
                     break;
                  case '2' : msg = "TWO";
                     break;
                  case '3' : msg = "THREE";
                     break;
                  case '4' : msg = "FOUR";
                     break;
                  case '5' : msg = "FIVE";
                     break;
                  case '6' : msg = "SIX";
                     break;
                  case '7' : msg = "SEVEN";
                     break;
                  case '8' : msg = "EIGHT";
                     break;
                  case '9' : msg = "NINE";
                     break;
               }
         }
      else
         {
            msg = "\0" ;
         }
      std::cout << msg;
   }

//std::cout << msg;////
return 0;
}

