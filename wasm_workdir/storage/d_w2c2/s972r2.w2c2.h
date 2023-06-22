#ifndef s972r2_H
#define s972r2_H

#include "w2c2_base.h"

typedef struct s972r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s972r2Instance;

void f0(s972r2Instance*);

void f1(s972r2Instance*);

U32 f2(s972r2Instance*);

void f3(s972r2Instance*,U32);

U32 f4(s972r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s972r2Instance*,U32,U32,U32,U32,U32);

void f6(s972r2Instance*,U32);

void f7(s972r2Instance*,U32,U32,U32);

void f8(s972r2Instance*,U32,U32,U32);

void s972r2____wasm_call_ctors(s972r2Instance*i);

void s972r2____wasm_apply_data_relocs(s972r2Instance*i);

U32 s972r2_func_1(s972r2Instance*i);

void s972r2_call_cb(s972r2Instance*i,U32 l0);

void s972r2Instantiate(s972r2Instance* instance, void* resolve(const char* module, const char* name));

void s972r2FreeInstance(s972r2Instance* instance);

#endif /* s972r2_H */

