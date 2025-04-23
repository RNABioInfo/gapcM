#pragma once
#include <cstdint>
#include <stdexcept>
#include "sequence.hh"

template<typename E>
constexpr auto to_integral(E e) -> typename std::underlying_type<E>::type
{
   return static_cast<typename std::underlying_type<E>::type>(e);
}

//New enum class for storing nucleotides and other special characters necessary for alignments. Works similarly to rnalib base_t, but is not implemented for RNAfolding at all.
enum class ali_t:std::uint8_t {N_BASE, A_BASE, C_BASE, G_BASE, U_BASE, GAP_BASE, SEPARATOR_BASE, MOTIF_EXTENDER, EMPTY, MATCH, MISMATCH, INDEL, INDEL_EXTENDER, CONNECTOR };
static char ALI_BASE_CHARS[to_integral(ali_t::CONNECTOR)+1] = {'N','A','C','G','U','_','+','~',' ','|','*', '=','-','$'};

// Convert an ali_t base into the corresponding character it is meant to represent.
inline char ali_base_to_char(int a) {
    if (a < to_integral(ali_t::CONNECTOR)+1) {
      return ALI_BASE_CHARS[a];
    } else {
      throw std::runtime_error("Something went wrong converting ali_bases back to chars.");
    }
    return 0;
  }

// Convert a char to it's corresponding ali_t value
inline char char_to_ali_base(char a) {
  char c = upper_case(a);
  for (int i = 0; i <= to_integral(ali_t::CONNECTOR); ++i) {
    if (c == ALI_BASE_CHARS[i]) {
      return i;
    }
  }
  throw std::runtime_error("Something went wrong converting chars to ali_bases.");
  return 0;
}
inline void to_ali_base(char &a, unsigned rows) {
  a = char_to_ali_base(a);
}
  
inline void to_ali_base(M_Char &m, unsigned rows) {
  for (unsigned r = 0; r < rows; ++r)
    m.column(r) = char_to_ali_base(m.column(r));
}

template<typename pos_type>
inline void char_to_rnali(Basic_Sequence<M_Char, pos_type> &seq) {
  typedef char alphabet2;
  for (typename Basic_Sequence<M_Char, pos_type>::iterator i = seq.begin();
       i != seq.end(); ++i)
    to_ali_base(*i, seq.rows());
  for (pos_type r = 0; r < seq.rows(); ++r) {
    alphabet2 *s = seq.row(r);
    for (pos_type i = 0; i < seq.size(); ++i, ++s)
      *s = char_to_ali_base(*s);
  }
}

  template<typename alphabet, typename pos_type>
  inline void char_to_rnali(Basic_Sequence<alphabet, pos_type> &seq) {
    typedef char alphabet2;
    for (typename Basic_Sequence<alphabet, pos_type>::iterator i = seq.begin();
         i != seq.end(); ++i){
      to_ali_base(*i, seq.rows());
         }
    if (seq.rows() == 1)
      return;
    for (pos_type r = 0; r < seq.rows(); ++r) {
      alphabet2 *s = seq.row(r);
      for (pos_type i = 0; i < seq.size(); ++i, ++s)
        *s = char_to_ali_base(*s);
    }
    
  }