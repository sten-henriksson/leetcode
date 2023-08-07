#include "my_functions.h"
#include <cctype>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool myFunction(std::string s, std::string t)
{
    auto print_key_value = [](const auto &key, const auto &value)
    {
        std::cout << "Key:[" << key << "] Value:[" << value << "]\n";
    };

    if (s.size() != t.size())
        return false;

    unordered_map<char, int> smap;
    unordered_map<char, int> tmap;

    for (int i = 0; i < s.size(); i++)
    {
        smap[s[i]]++;
        tmap[t[i]]++;
    }
    for (const auto &n : smap)
        print_key_value(n.first, n.second);
    std::cout << "420\n";
    for (const auto &n : tmap)
        print_key_value(n.first, n.second);
    for (int i = 0; i < smap.size(); i++)
    {
        if (smap[i] != tmap[i])
            return false;
    }
    return true;
}
