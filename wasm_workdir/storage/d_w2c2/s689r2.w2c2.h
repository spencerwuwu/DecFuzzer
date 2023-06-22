#ifndef s689r2_H
#define s689r2_H

#include "w2c2_base.h"

typedef struct s689r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s689r2Instance;

void f0(s689r2Instance*);

void f1(s689r2Instance*);

U32 f2(s689r2Instance*);

void f3(s689r2Instance*,U32);

U32 f4(s689r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s689r2Instance*,U32,U32,U32,U32,U32);

void f6(s689r2Instance*,U32);

void f7(s689r2Instance*,U32,U32,U32);

void f8(s689r2Instance*,U32,U32,U32);

void s689r2____wasm_call_ctors(s689r2Instance*i);

void s689r2____wasm_apply_data_relocs(s689r2Instance*i);

U32 s689r2_func_1(s689r2Instance*i);

void s689r2_call_cb(s689r2Instance*i,U32 l0);

void s689r2Instantiate(s689r2Instance* instance, void* resolve(const char* module, const char* name));

void s689r2FreeInstance(s689r2Instance* instance);

#endif /* s689r2_H */

