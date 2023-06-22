#ifndef s228r2_H
#define s228r2_H

#include "w2c2_base.h"

typedef struct s228r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s228r2Instance;

void f0(s228r2Instance*);

void f1(s228r2Instance*);

U32 f2(s228r2Instance*);

void f3(s228r2Instance*,U32);

U32 f4(s228r2Instance*,U32,U32,U32,U32,U32);

void f5(s228r2Instance*,U32,U32,U32,U32,U32);

void f6(s228r2Instance*,U32);

void f7(s228r2Instance*,U32,U32,U32);

void f8(s228r2Instance*,U32,U32,U32);

void s228r2____wasm_call_ctors(s228r2Instance*i);

void s228r2____wasm_apply_data_relocs(s228r2Instance*i);

U32 s228r2_func_1(s228r2Instance*i);

void s228r2_call_cb(s228r2Instance*i,U32 l0);

void s228r2Instantiate(s228r2Instance* instance, void* resolve(const char* module, const char* name));

void s228r2FreeInstance(s228r2Instance* instance);

#endif /* s228r2_H */

