// Copyright 2022 UNN-IASR
#include <deque>
#include <map>
#include <string>
#include <vector>

class Markov {
 private:
    typedef std::deque<std::tring> prefix;
    std::map<prefix, std::vector<std::string>> statelab;
    int NPREF = 2;
    int MAXGEN = 1000;

 public:
    Markov(vector<string> allwords, int prfx_count, int gen_count);
    Markov(map<prefix, vector<string>> Gen, int gen_count);
    string TextGen();
};

