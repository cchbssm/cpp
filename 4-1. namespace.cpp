#include <iostream>

namespace fi{
   int x=1;
}

namespace se{
   int x=2;
}
int main()
{
   int x=0;
   std::cout << x << '\n'; //지역변수 x 출력
   std::cout << fi::x; //namespcae se의 x 출력
   std::cout << se::x << '\n'; //namespace fi의 x 출력

   return 0;
}
