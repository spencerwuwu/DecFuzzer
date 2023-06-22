#ifndef s117r2_H
#define s117r2_H

#include "w2c2_base.h"

typedef struct s117r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s117r2Instance;

void f0(s117r2Instance*);

void f1(s117r2Instance*);

U32 f2(s117r2Instance*);

void f3(s117r2Instance*,U32);

U32 f4(s117r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s117r2Instance*,U32,U32,U32,U32,U32);

void f6(s117r2Instance*,U32);

void f7(s117r2Instance*,U32,U32,U32);

void f8(s117r2Instance*,U32,U32,U32);

void s117r2____wasm_call_ctors(s117r2Instance*i);

void s117r2____wasm_apply_data_relocs(s117r2Instance*i);

U32 s117r2_func_1(s117r2Instance*i);

void s117r2_call_cb(s117r2Instance*i,U32 l0);

void s117r2Instantiate(s117r2Instance* instance, void* resolve(const char* module, const char* name));

void s117r2FreeInstance(s117r2Instance* instance);

#endif /* s117r2_H */

