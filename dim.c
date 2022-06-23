#include "dim.h"

long count = 0;
struct Map* g_map = NULL;

void* checked_malloc(int len) 
{
    void *p = malloc(len);
    assert(p);
    return p;
}
void map_enter(char* id, long* dim)
{
    struct Tab* entry = checked_malloc(sizeof(*entry));
    entry->id = checked_malloc(strlen(id) + 2);
    strcpy(entry->id, id);
    entry->dim = dim;
    HASH_ADD_KEYPTR(hh, g_map->table, entry->id, strlen(entry->id), entry);
}
struct Tab* map_lookup(char* id)
{
    struct Tab* entry;
    HASH_FIND_STR(g_map->table, id, entry);
    return entry;
}
void init_map()
{
    g_map = checked_malloc(sizeof(*g_map));
    g_map->next = NULL;
    g_map->table = NULL;
}
void push_map()
{
    struct Map* mp = (struct Map*)checked_malloc(sizeof(*mp));
    mp->next = g_map;
    mp->table = NULL;
    g_map = mp;
}
void pop_map()
{
    if (g_map) {
        struct Map* mp = g_map;
        g_map = g_map->next;
        HASH_CLEAR(hh, mp->table);
        free(mp);
    }
}
void def_id(char* src)
{
    char id[128];
    int i = 0, j = 0;
    while(src[i] != ' ') {
        i++;
    }
    while(src[i] == ' ') {
        i++;
    }
    while(src[i] != '[') {
        id[j] = src[i];
        i++;
        j++;
    }
    id[i]= 0;
    struct Tab* entry = map_lookup(&id[0]);
    if (entry) {
        printf("multi definition: %s", &id[0]);
    } else {
        map_enter(&id[0], (long*)count);
        count++;
    }
}
void use_id(char* src)
{
    char id[128];
    int i = 0;
    while(src[i] != '[') {
        id[i] = src[i];
        i++;
    }
    id[i]= 0;
    struct Tab* entry = map_lookup(&id[0]);
    if (entry) {
        printf("multi definition: %s", &id[0]);
    } else {
        printf("id not found: %s", &id[0]);
    }
}
int main(int argc, char **argv)
{
    int i;
    init_map();
    for(i = 1; i < argc; i++) {
        if(!(yyin = fopen(argv[i], "r"))) {
            perror(argv[1]);
            return 1;
        }
        yylex();
    }
    return 0;
}