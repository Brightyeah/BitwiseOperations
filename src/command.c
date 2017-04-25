#include "command.h"

int encode_file(const char *in_file_name, const char *out_file_name)
{
    uint32_t code_point;
    CodeUnits *code_units
    FILE *stream_in, *stream_out;
    stream_in = fopen(in_file_name, "r");
    if (stream_in == NULL) {
        return -1;
    }
    stream_out = fopen(out_file_name, "wb");
        if (stream_out == NULL) {
        return -1;
    }
    while (fscanf(in, "%" SCNx32, &code_point) == 1) {
        encode(code_point, code_units);
        write_code_unit(stream_out, code_unit);
    }
    fclose(stream_in);
    fclose(stream_out);
}
int decode_file(const char *in_file_name, const char *out_file_name)
{
    
    FILE *stream_in, *stream_out;
    stream_in = fopen(in_file_name, "rb");
    if (stream_in == NULL) {
        return -1;
    }
    stream2 = fopen(out_file_name, "w");
        if (stream_out == NULL) {
        return -1;
    }
}