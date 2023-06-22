#ifndef s156r2_H
#define s156r2_H

#include "w2c2_base.h"

typedef struct s156r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s156r2Instance;

void f0(s156r2Instance*);

void f1(s156r2Instance*);

U32 f2(s156r2Instance*);

void f3(s156r2Instance*,U32);

U32 f4(s156r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s156r2Instance*,U32,U32,U32,U32,U32);

void f6(s156r2Instance*,U32);

void f7(s156r2Instance*,U32,U32,U32);

void f8(s156r2Instance*,U32,U32,U32);

void s156r2____wasm_call_ctors(s156r2Instance*i);

void s156r2____wasm_apply_data_relocs(s156r2Instance*i);

U32 s156r2_func_1(s156r2Instance*i);

void s156r2_call_cb(s156r2Instance*i,U32 l0);

void s156r2Instantiate(s156r2Instance* instance, void* resolve(const char* module, const char* name));

void s156r2FreeInstance(s156r2Instance* instance);

#endif /* s156r2_H */

