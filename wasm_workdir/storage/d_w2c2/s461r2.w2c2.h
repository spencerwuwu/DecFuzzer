#ifndef s461r2_H
#define s461r2_H

#include "w2c2_base.h"

typedef struct s461r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s461r2Instance;

void f0(s461r2Instance*);

void f1(s461r2Instance*);

U32 f2(s461r2Instance*);

void f3(s461r2Instance*,U32);

U32 f4(s461r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s461r2Instance*,U32,U32,U32,U32,U32);

void f6(s461r2Instance*,U32);

void f7(s461r2Instance*,U32,U32,U32);

void f8(s461r2Instance*,U32,U32,U32);

void s461r2____wasm_call_ctors(s461r2Instance*i);

void s461r2____wasm_apply_data_relocs(s461r2Instance*i);

U32 s461r2_func_1(s461r2Instance*i);

void s461r2_call_cb(s461r2Instance*i,U32 l0);

void s461r2Instantiate(s461r2Instance* instance, void* resolve(const char* module, const char* name));

void s461r2FreeInstance(s461r2Instance* instance);

#endif /* s461r2_H */

