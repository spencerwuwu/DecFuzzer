#ifndef s416r2_H
#define s416r2_H

#include "w2c2_base.h"

typedef struct s416r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s416r2Instance;

void f0(s416r2Instance*);

void f1(s416r2Instance*);

U32 f2(s416r2Instance*);

void f3(s416r2Instance*,U32);

U32 f4(s416r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s416r2Instance*,U32,U32,U32,U32,U32);

void f6(s416r2Instance*,U32);

void f7(s416r2Instance*,U32,U32,U32);

void f8(s416r2Instance*,U32,U32,U32);

void s416r2____wasm_call_ctors(s416r2Instance*i);

void s416r2____wasm_apply_data_relocs(s416r2Instance*i);

U32 s416r2_func_1(s416r2Instance*i);

void s416r2_call_cb(s416r2Instance*i,U32 l0);

void s416r2Instantiate(s416r2Instance* instance, void* resolve(const char* module, const char* name));

void s416r2FreeInstance(s416r2Instance* instance);

#endif /* s416r2_H */

