#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

struct IntLen{
    int len1;
    int len2;
};
struct DataType{
    int type;
    int uz;
    int bin;
    int len1;
    int len2;
};

static inline struct DataType* get_data_type(int type, int uz, int bin, int len1, int len2)
{
    struct DataType* data = (struct DataType*)malloc(sizeof(struct DataType));
    data->type = type;
    data->len1 = len1;
    data->len2 = len2;  
    data->uz = uz;
    data->bin = bin;
    return data;
}