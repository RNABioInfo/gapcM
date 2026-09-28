/* {{{

    This file is part of gapc (GAPC - Grammars, Algebras, Products - Compiler;
      a system to compile algebraic dynamic programming programs)

    Copyright (C) 2008-2011  Georg Sauthoff
         email: gsauthof@techfak.uni-bielefeld.de or gsauthof@sdf.lonestar.org

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

}}} */

#ifndef RTLIB_SHAPE_ALPH_HH_
#define RTLIB_SHAPE_ALPH_HH_

#include <math.h>

template <typename T, typename Size>
struct ShapeAlph {
  enum {
    /* number bits for a character to split a byte into
     * must divide 8 without rest, i.e. can be 2, 4, 8
     * make sufficient space for the number of different
     * characters in your alphabet
     */
    char_width = 8
  };

 private:
  unsigned int char_states = pow(
    2, static_cast<int>(this->char_width))-1;

  void set_one(T &t, Size n) const {
    T x = T(1) << n;
    t |= x;
  }

 public:
  void operator()(T &t, char x, Size l) const {
    switch (x) {
      case '[' :
        t |= T(1) << (l-(char_width-1));
        // set_zero(t, l);
        // set_one(t, l-1);
        break;
      case ']' :
        t |= T(2) << (l-(char_width-1));
        // set_one(t, l);
        // set_zero(t, l-1);
        break;
      case '_' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(3) << (l-(char_width-1));
        break;

      case 'A' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(4) << (l-(char_width-1));
        break;
        
      case 'B' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(5) << (l-(char_width-1));
        break;
          
      case 'C' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(6) << (l-(char_width-1));
        break;
          
      case 'D' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(7) << (l-(char_width-1));
        break;
          
      case 'E' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(8) << (l-(char_width-1));
        break;
          
      case 'F' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(9) << (l-(char_width-1));
        break;
          
      case 'G' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(10) << (l-(char_width-1));
        break;
          
      case 'H' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(11) << (l-(char_width-1));
        break;
          
      case 'I' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(12) << (l-(char_width-1));
        break;
          
      case 'J' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(13) << (l-(char_width-1));
        break;
          
      case 'K' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(14) << (l-(char_width-1));
        break;
          
      case 'L' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(15) << (l-(char_width-1));
        break;
          
      case 'M' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(16) << (l-(char_width-1));
        break;
          
      case 'N' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(17) << (l-(char_width-1));
        break;
        
      case 'O' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(18) << (l-(char_width-1));
        break;
          
      case 'P' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(19) << (l-(char_width-1));
        break;
          
      case 'Q' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(20) << (l-(char_width-1));
        break;
          
      case 'R' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(21) << (l-(char_width-1));
        break;
          
      case 'S' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(22) << (l-(char_width-1));
        break;
          
      case 'T' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(23) << (l-(char_width-1));
        break;
          
      case 'U' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(24) << (l-(char_width-1));
        break;
          
      case 'V' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(25) << (l-(char_width-1));
        break;
          
      case 'W' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(26) << (l-(char_width-1));
        break;
          
      case 'X' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(27) << (l-(char_width-1));
        break;
          
      case 'Y' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(28) << (l-(char_width-1));
        break;
          
      case 'Z' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(29) << (l-(char_width-1));
        break;

      case 'a' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(30) << (l-(char_width-1));
        break;
        
      case 'b' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(31) << (l-(char_width-1));
        break;
  
      case 'c' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(32) << (l-(char_width-1));
        break;
        
      case 'd' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(33) << (l-(char_width-1));
        break;
          
      case 'e' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(34) << (l-(char_width-1));
        break;
          
      case 'f' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(35) << (l-(char_width-1));
        break;
          
      case 'g' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(36) << (l-(char_width-1));
        break;
          
      case 'h' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(37) << (l-(char_width-1));
        break;
          
      case 'i' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(38) << (l-(char_width-1));
        break;
          
      case 'j' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(39) << (l-(char_width-1));
        break;
          
      case 'k' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(40) << (l-(char_width-1));
        break;
          
      case 'l' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(41) << (l-(char_width-1));
        break;
          
      case 'm' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(42) << (l-(char_width-1));
        break;
          
      case 'n' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(43) << (l-(char_width-1));
        break;
          
      case 'o' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(44) << (l-(char_width-1));
        break;
          
      case 'p' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(45) << (l-(char_width-1));
        break;
          
      case 'q' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(46) << (l-(char_width-1));
        break;
          
      case 'r' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(47) << (l-(char_width-1));
        break;
          
      case 's' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(48) << (l-(char_width-1));
        break;
          
      case 't' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(49) << (l-(char_width-1));
        break;
          
      case 'u' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(50) << (l-(char_width-1));
        break;
          
      case 'v' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(51) << (l-(char_width-1));
        break;
          
      case 'w' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(52) << (l-(char_width-1));
        break;
          
      case 'x' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(53) << (l-(char_width-1));
        break;
          
      case 'y' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(54) << (l-(char_width-1));
        break;
          
      case 'z' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(55) << (l-(char_width-1));
        break;

      default: assert(false);
    }
  }
  char to_char(T &t, Size i) const {
    switch (t >> i & T(char_states)) {
      case 1  : return '[';
      case 2  : return ']';
      case 3  : return '_';
      case 4  : return 'A';
      case 5  : return 'B';
      case 6  : return 'C';
      case 7  : return 'D';
      case 8  : return 'E';
      case 9  : return 'F';
      case 10 : return 'G';
      case 11 : return 'H';
      case 12 : return 'I';
      case 13 : return 'J';
      case 14 : return 'K';
      case 15 : return 'L';
      case 16 : return 'M';
      case 17 : return 'N';
      case 18 : return 'O';
      case 19 : return 'P';
      case 20 : return 'Q';
      case 21 : return 'R';
      case 22 : return 'S';
      case 23 : return 'T';
      case 24 : return 'U';
      case 25 : return 'V';
      case 26 : return 'W';
      case 27 : return 'X';
      case 28 : return 'Y';
      case 29 : return 'Z';
      case 30 : return 'a';
      case 31 : return 'b';
      case 32 : return 'c';
      case 33 : return 'd';
      case 34 : return 'e';
      case 35 : return 'f';
      case 36 : return 'g';
      case 37 : return 'h';
      case 38 : return 'i';
      case 39 : return 'j';
      case 40 : return 'k';
      case 41 : return 'l';
      case 42 : return 'm';
      case 43 : return 'n';
      case 44 : return 'o';
      case 45 : return 'p';
      case 46 : return 'q';
      case 47 : return 'r';
      case 48 : return 's';
      case 49 : return 't';
      case 50 : return 'u';
      case 51 : return 'v';
      case 52 : return 'w';
      case 53 : return 'x';
      case 54 : return 'y';
      case 55 : return 'z';
      default: return 0;
    }
  }
};

#endif  // RTLIB_SHAPE_ALPH_HH_
