#ifndef s375r2_H
#define s375r2_H

#include "w2c2_base.h"

typedef struct s375r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s375r2Instance;

void f0(s375r2Instance*);

void f1(s375r2Instance*);

U32 f2(s375r2Instance*);

void f3(s375r2Instance*,U32);

U32 f4(s375r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s375r2Instance*,U32,U32,U32,U32,U32);

void f6(s375r2Instance*,U32);

void f7(s375r2Instance*,U32,U32,U32);

void f8(s375r2Instance*,U32,U32,U32);

void s375r2____wasm_call_ctors(s375r2Instance*i);

void s375r2____wasm_apply_data_relocs(s375r2Instance*i);

U32 s375r2_func_1(s375r2Instance*i);

void s375r2_call_cb(s375r2Instance*i,U32 l0);

void s375r2Instantiate(s375r2Instance* instance, void* resolve(const char* module, const char* name));

void s375r2FreeInstance(s375r2Instance* instance);

#endif /* s375r2_H */

