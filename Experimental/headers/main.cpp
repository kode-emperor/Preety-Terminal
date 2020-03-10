#include "../../std/stdfacs.hpp"
#include "unicode.hpp"


int main()
{
  
  std::cout << color[foreground][blue];
  std::cout << double_box[DDR];
  std::cout << double_box[DHL] * 30;
  std::cout << double_box[DDL] <<std::endl;
  std::cout << double_box[DVI];
  std::cout << color[foreground][green];
  std::cout << "Term Calculator" <<
  static_cast<std::string>(" ") * 15  <<
  std::endl;
  std::cout << color[foreground][blue] <<
    double_box[DVR] <<
    double_box[DHL] * 30 <<
    double_box[DVL] << std::endl;
}