#include "cstrHori.hpp"

namespace cstr_hori_vert{
  CStringH operator+ (CString& a, CString& b){
    CStringH ans;
    ans.set_str(a.get_length() + b.get_length());
    for(int i = 0; i < a.get_length(); i++){
      ans.set_element(i, a.get_element(i));
    }
    for(int i = 0; i < b.get_length(); i++){
      ans.set_element(a.get_length() + i, b.get_element(i));
    }
    return ans;
  }
}
