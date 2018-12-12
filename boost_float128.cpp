#include <boost/multiprecision/float128.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

int main()
{
   using namespace boost::multiprecision;

   uint128_t u128;

   float128 float128_true_min = std::numeric_limits<float128>::denorm_min();
   memcpy(&u128, &float128_true_min, sizeof(u128));
   std::cout << "float128_true_min=" << std::setw(16) << std::setfill(' ') << float128_true_min
       << ":0x" << std::hex << std::setw(32) << std::setfill('0') << u128 << std::endl;

   float128 float128_min = std::numeric_limits<float128>::min();
   memcpy(&u128, &float128_min, sizeof(u128));
   std::cout << "float128_min     =" << std::setw(16) << std::setfill(' ') << float128_min
       << ":0x" << std::hex << std::setw(32) << std::setfill('0') << u128 << std::endl;

   float128 float128_max = std::numeric_limits<float128>::max();
   memcpy(&u128, &float128_max, sizeof(u128));
   std::cout << "float128_max     =" << std::setw(16) << std::setfill(' ') << float128_max
       << ":0x" << std::hex << std::setw(32) << std::setfill('0') << u128 << std::endl;

   float128 float128_epsilon = std::numeric_limits<float128>::epsilon();
   memcpy(&u128, &float128_epsilon, sizeof(u128));
   std::cout << "float128_epsilon =" << std::setw(16) << std::setfill(' ') << float128_epsilon
       << ":0x" << std::hex << std::setw(32) << std::setfill('0') << u128 << std::endl;

   float128 float128_toint = 1.0 / float128_epsilon;
   memcpy(&u128, &float128_toint, sizeof(u128));
   std::cout << "float128_toint   =" << std::setw(16) << std::setfill(' ') << float128_toint
       << ":0x" << std::hex << std::setw(32) << std::setfill('0') << u128 << std::endl;

   return 0;
}
