#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;

class Solution {
public:
  std::vector<string> fizzBuzz_old_school_way(int n) {
    std::vector<string> result;
    for (int i=1; i<=n; i++) {
      if ( i%3 == 0 && i%5 ==0 ) {
        result.push_back("FizzBuzz");
      }else if (i%3 == 0) {
        result.push_back("Fizz");
      }else if (i%5 == 0) {
        result.push_back("Buzz");
      }else{
        result.push_back(std::to_string(i));
      }
    }
    return result;
  }
