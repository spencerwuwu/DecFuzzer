#ifndef s820r2_H
#define s820r2_H

#include "w2c2_base.h"

typedef struct s820r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s820r2Instance;

void f0(s820r2Instance*);

void f1(s820r2Instance*);

U32 f2(s820r2Instance*);

void f3(s820r2Instance*,U32);

U32 f4(s820r2Instance*,U32,U32,U32);

void f5(s820r2Instance*,U32,U32,U32,U32,U32);

void f6(s820r2Instance*,U32);

void f7(s820r2Instance*,U32,U32,U32);

void f8(s820r2Instance*,U32,U32,U32);

void s820r2____wasm_call_ctors(s820r2Instance*i);

void s820r2____wasm_apply_data_relocs(s820r2Instance*i);

U32 s820r2_func_1(s820r2Instance*i);

void s820r2_call_cb(s820r2Instance*i,U32 l0);

void s820r2Instantiate(s820r2Instance* instance, void* resolve(const char* module, const char* name));

void s820r2FreeInstance(s820r2Instance* instance);

#endif /* s820r2_H */

