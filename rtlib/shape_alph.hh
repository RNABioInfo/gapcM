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
    char_width = 4
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
      case 'G' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(4) << (l-(char_width-1));
        break;
      case 'U' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(5) << (l-(char_width-1));
        break;
      case 'T' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(6) << (l-(char_width-1));
        break;
      case 'C' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(7) << (l-(char_width-1));
        break;
      case 'K' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(8) << (l-(char_width-1));
        break;
      case 'S' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(9) << (l-(char_width-1));
        break;
      case 'L' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(10) << (l-(char_width-1));
        break;
      case 'A' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(11) << (l-(char_width-1));
        break;
      case 'M' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(12) << (l-(char_width-1));
        break;
      case 'D' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(13) << (l-(char_width-1));
        break;
      case 'g' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(14) << (l-(char_width-1));
        break;
      case 'u' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(15) << (l-(char_width-1));
        break;
      case 't' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(16) << (l-(char_width-1));
        break;
      case 'c' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(17) << (l-(char_width-1));
        break;
      case 'k' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(18) << (l-(char_width-1));
        break;
      case 's' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(19) << (l-(char_width-1));
        break;
      case 'l' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(20) << (l-(char_width-1));
        break;
      case 'a' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(21) << (l-(char_width-1));
        break;
      case 'm' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(22) << (l-(char_width-1));
        break;
      case 'd' :
        // set_one(t, l);
        // set_one(t, l-1);
        t |= T(23) << (l-(char_width-1));
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
