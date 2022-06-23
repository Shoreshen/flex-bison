#pragma once
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./uthash/include/uthash.h"

// flex
extern int yylex();
extern FILE *yyin;

// user define
struct Tab {
    char* id;
    long* dim;
    UT_hash_handle hh;
};

struct Map {
    struct Tab* table;
    struct Map* next;
};
void def_id(char* src);
void use_id(char* src);

// Hash map
void init_map();
void push_map();
void pop_map();