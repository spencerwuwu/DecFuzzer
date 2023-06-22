#ifndef s484r2_H
#define s484r2_H

#include "w2c2_base.h"

typedef struct s484r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s484r2Instance;

void f0(s484r2Instance*);

void f1(s484r2Instance*);

U32 f2(s484r2Instance*);

void f3(s484r2Instance*,U32);

U32 f4(s484r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s484r2Instance*,U32,U32,U32,U32,U32);

void f6(s484r2Instance*,U32);

void f7(s484r2Instance*,U32,U32,U32);

void f8(s484r2Instance*,U32,U32,U32);

void s484r2____wasm_call_ctors(s484r2Instance*i);

void s484r2____wasm_apply_data_relocs(s484r2Instance*i);

U32 s484r2_func_1(s484r2Instance*i);

void s484r2_call_cb(s484r2Instance*i,U32 l0);

void s484r2Instantiate(s484r2Instance* instance, void* resolve(const char* module, const char* name));

void s484r2FreeInstance(s484r2Instance* instance);

#endif /* s484r2_H */

