#ifndef s34r2_H
#define s34r2_H

#include "w2c2_base.h"

typedef struct s34r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s34r2Instance;

void f0(s34r2Instance*);

void f1(s34r2Instance*);

U32 f2(s34r2Instance*);

void f3(s34r2Instance*,U32);

U32 f4(s34r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s34r2Instance*,U32,U32,U32,U32,U32);

void f6(s34r2Instance*,U32);

void f7(s34r2Instance*,U32,U32,U32);

void f8(s34r2Instance*,U32,U32,U32);

void s34r2____wasm_call_ctors(s34r2Instance*i);

void s34r2____wasm_apply_data_relocs(s34r2Instance*i);

U32 s34r2_func_1(s34r2Instance*i);

void s34r2_call_cb(s34r2Instance*i,U32 l0);

void s34r2Instantiate(s34r2Instance* instance, void* resolve(const char* module, const char* name));

void s34r2FreeInstance(s34r2Instance* instance);

#endif /* s34r2_H */

