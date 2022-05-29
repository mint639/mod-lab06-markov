// Copyright 2022 UNN-IASR
#ifndef INCLUDE_TEXTGEN_H_
#define INCLUDE_TEXTGEN_H_
#include <deque>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Markov {
 private:
    typedef deque<string> prefix;
    map<prefix, vector<string>> statelab;
    int NPREF = 2;
    int MAXGEN = 1000;

 public:
    Markov(vector<string> allwords, int prfx_count, int gen_count);
    Markov(map<prefix, vector<string>> Gen, int gen_count);
    string TextGen();
};
endif // INCLUDE_TEXTGEN_H_
