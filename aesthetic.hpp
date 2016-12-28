#include <string>

std::string aesthetic(std::string s) {
  const char *c = s.c_str();
  std::string f = "";
  for(int i = 0; i < s.length(); i++) {
    f += " ";
    f += c[i];
    if(i == s.length()) {
      f += " ";
    }
  }
  return f;
}
