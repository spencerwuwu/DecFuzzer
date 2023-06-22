#ifndef s982r2_H
#define s982r2_H

#include "w2c2_base.h"

typedef struct s982r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s982r2Instance;

void f0(s982r2Instance*);

void f1(s982r2Instance*);

U32 f2(s982r2Instance*);

void f3(s982r2Instance*,U32);

U32 f4(s982r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s982r2Instance*,U32,U32,U32,U32,U32);

void f6(s982r2Instance*,U32);

void f7(s982r2Instance*,U32,U32,U32);

void f8(s982r2Instance*,U32,U32,U32);

void s982r2____wasm_call_ctors(s982r2Instance*i);

void s982r2____wasm_apply_data_relocs(s982r2Instance*i);

U32 s982r2_func_1(s982r2Instance*i);

void s982r2_call_cb(s982r2Instance*i,U32 l0);

void s982r2Instantiate(s982r2Instance* instance, void* resolve(const char* module, const char* name));

void s982r2FreeInstance(s982r2Instance* instance);

#endif /* s982r2_H */

