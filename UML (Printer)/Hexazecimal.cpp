//
// Created by Carina on 5/29/2022.
//

#include "Hexazecimal.h"

string Hexazecimal::GetFormatName() {
   return "Hexazecimal";
}

string Hexazecimal::FormatNumber(int number) {
    const string chars = "0123456789ABCDEF";
    return number < 16 ? chars.substr( number, 1 ) : FormatNumber( number / 16 ) + chars[number%16];
}
