#ifndef s774r2_H
#define s774r2_H

#include "w2c2_base.h"

typedef struct s774r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s774r2Instance;

void f0(s774r2Instance*);

void f1(s774r2Instance*);

U32 f2(s774r2Instance*);

void f3(s774r2Instance*,U32);

U32 f4(s774r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s774r2Instance*,U32,U32,U32,U32,U32);

void f6(s774r2Instance*,U32);

void f7(s774r2Instance*,U32,U32,U32);

void f8(s774r2Instance*,U32,U32,U32);

void s774r2____wasm_call_ctors(s774r2Instance*i);

void s774r2____wasm_apply_data_relocs(s774r2Instance*i);

U32 s774r2_func_1(s774r2Instance*i);

void s774r2_call_cb(s774r2Instance*i,U32 l0);

void s774r2Instantiate(s774r2Instance* instance, void* resolve(const char* module, const char* name));

void s774r2FreeInstance(s774r2Instance* instance);

#endif /* s774r2_H */

