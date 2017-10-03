//
// Created by bence on 9/26/17.
//

#include "decipher.h"

std::string decipher(const std::string &key, const std::string &codedMessage) {

    if ( codedMessage.empty() ) return "";
    if ( key.empty() ) return codedMessage;

    std::stringstream ss;
    int keyIndex = 0;

    for ( char c : codedMessage) {
        if (c >= 'a' && c <= 'z') {
            c += key[keyIndex % key.size()] - 'A';
            ++keyIndex;
            if (c > 'z') {
                c -= 'z' - 'a' + 1;
            }
        }else if (c >= 'A' && c <= 'Z') {
            c += key[keyIndex % key.size()] - 'A';
            ++keyIndex;
            if (c > 'Z') {
                c -= 'z' - 'a' + 1;
            }
        }
        ss << c;
    }
    return ss.str();
}
