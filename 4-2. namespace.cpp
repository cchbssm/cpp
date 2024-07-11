#include <iostream>

namespace fi{
   int x=1;
}

namespace se{
   int x=2;
}
int main()
{
   using namespace fi; //namespace fi 사용

   std::cout << x; //fi의 x 출력
   std::cout << se::x; //se의 x 출력
   
   return 0;
}
