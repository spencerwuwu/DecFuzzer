#ifndef s661r2_H
#define s661r2_H

#include "w2c2_base.h"

typedef struct s661r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s661r2Instance;

void f0(s661r2Instance*);

void f1(s661r2Instance*);

U32 f2(s661r2Instance*);

void f3(s661r2Instance*,U32);

void f4(s661r2Instance*,U32);

void s661r2____wasm_call_ctors(s661r2Instance*i);

void s661r2____wasm_apply_data_relocs(s661r2Instance*i);

U32 s661r2_func_1(s661r2Instance*i);

void s661r2_call_cb(s661r2Instance*i,U32 l0);

void s661r2Instantiate(s661r2Instance* instance, void* resolve(const char* module, const char* name));

void s661r2FreeInstance(s661r2Instance* instance);

#endif /* s661r2_H */

