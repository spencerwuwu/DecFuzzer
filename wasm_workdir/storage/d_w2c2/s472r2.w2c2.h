#ifndef s472r2_H
#define s472r2_H

#include "w2c2_base.h"

typedef struct s472r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s472r2Instance;

void f0(s472r2Instance*);

void f1(s472r2Instance*);

U32 f2(s472r2Instance*);

void f3(s472r2Instance*,U32);

U32 f4(s472r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s472r2Instance*,U32,U32,U32,U32,U32);

void f6(s472r2Instance*,U32);

void f7(s472r2Instance*,U32,U32,U32);

void f8(s472r2Instance*,U32,U32,U32);

void s472r2____wasm_call_ctors(s472r2Instance*i);

void s472r2____wasm_apply_data_relocs(s472r2Instance*i);

U32 s472r2_func_1(s472r2Instance*i);

void s472r2_call_cb(s472r2Instance*i,U32 l0);

void s472r2Instantiate(s472r2Instance* instance, void* resolve(const char* module, const char* name));

void s472r2FreeInstance(s472r2Instance* instance);

#endif /* s472r2_H */

