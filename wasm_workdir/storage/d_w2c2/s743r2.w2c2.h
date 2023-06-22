#ifndef s743r2_H
#define s743r2_H

#include "w2c2_base.h"

typedef struct s743r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s743r2Instance;

void f0(s743r2Instance*);

void f1(s743r2Instance*);

U32 f2(s743r2Instance*);

void f3(s743r2Instance*,U32);

U32 f4(s743r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s743r2Instance*,U32,U32,U32,U32,U32);

void f6(s743r2Instance*,U32);

void f7(s743r2Instance*,U32,U32,U32);

void f8(s743r2Instance*,U32,U32,U32);

void s743r2____wasm_call_ctors(s743r2Instance*i);

void s743r2____wasm_apply_data_relocs(s743r2Instance*i);

U32 s743r2_func_1(s743r2Instance*i);

void s743r2_call_cb(s743r2Instance*i,U32 l0);

void s743r2Instantiate(s743r2Instance* instance, void* resolve(const char* module, const char* name));

void s743r2FreeInstance(s743r2Instance* instance);

#endif /* s743r2_H */

