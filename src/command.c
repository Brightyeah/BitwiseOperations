#include "command.h"
#include <inttypes.h>

int encode_file(const char *in_file_name, const char *out_file_name)
{
    uint32_t code_point;
    CodeUnits units;
    CodeUnits *code_units = &units;
    FILE *stream_in, *stream_out;
    stream_in = fopen(in_file_name, "r");
    if (stream_in == NULL) {
        return -1;
    }
    stream_out = fopen(out_file_name, "wb");
    if (stream_out == NULL) {
        return -1;
    }
    while (fscanf(in, "%" SCNx32, &code_point) != 0) {
        encode(code_point, code_units);
        write_code_unit(stream_out, code_units);
        code_point = 0;
    }
    fclose(stream_in);
    fclose(stream_out);
    return 0;
}
int decode_file(const char *in_file_name, const char *out_file_name)
{
    FILE *stream_in, *stream_out;
    stream_in = fopen(in_file_name, "rb");
    if (stream_in == NULL) {
        return -1;
    }
    stream_out = fopen(out_file_name, "w");
    if (stream_out == NULL) {
        return -1;
    }
    while () {
        
    }
    fclose(stream_in);
    fclose(stream_out);
    return 0;
}