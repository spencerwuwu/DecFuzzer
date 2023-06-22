#ifndef s47r2_H
#define s47r2_H

#include "w2c2_base.h"

typedef struct s47r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s47r2Instance;

void f0(s47r2Instance*);

void f1(s47r2Instance*);

U32 f2(s47r2Instance*);

void f3(s47r2Instance*,U32);

U32 f4(s47r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s47r2Instance*,U32,U32,U32,U32,U32);

void f6(s47r2Instance*,U32);

void f7(s47r2Instance*,U32,U32,U32);

void f8(s47r2Instance*,U32,U32,U32);

void s47r2____wasm_call_ctors(s47r2Instance*i);

void s47r2____wasm_apply_data_relocs(s47r2Instance*i);

U32 s47r2_func_1(s47r2Instance*i);

void s47r2_call_cb(s47r2Instance*i,U32 l0);

void s47r2Instantiate(s47r2Instance* instance, void* resolve(const char* module, const char* name));

void s47r2FreeInstance(s47r2Instance* instance);

#endif /* s47r2_H */

