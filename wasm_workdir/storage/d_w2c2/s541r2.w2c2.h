#ifndef s541r2_H
#define s541r2_H

#include "w2c2_base.h"

typedef struct s541r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s541r2Instance;

void f0(s541r2Instance*);

void f1(s541r2Instance*);

U32 f2(s541r2Instance*);

void f3(s541r2Instance*,U32);

U32 f4(s541r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s541r2Instance*,U32,U32,U32,U32,U32);

void f6(s541r2Instance*,U32);

void f7(s541r2Instance*,U32,U32,U32);

void f8(s541r2Instance*,U32,U32,U32);

void s541r2____wasm_call_ctors(s541r2Instance*i);

void s541r2____wasm_apply_data_relocs(s541r2Instance*i);

U32 s541r2_func_1(s541r2Instance*i);

void s541r2_call_cb(s541r2Instance*i,U32 l0);

void s541r2Instantiate(s541r2Instance* instance, void* resolve(const char* module, const char* name));

void s541r2FreeInstance(s541r2Instance* instance);

#endif /* s541r2_H */

