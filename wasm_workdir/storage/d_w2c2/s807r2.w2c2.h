#ifndef s807r2_H
#define s807r2_H

#include "w2c2_base.h"

typedef struct s807r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s807r2Instance;

void f0(s807r2Instance*);

void f1(s807r2Instance*);

U32 f2(s807r2Instance*);

void f3(s807r2Instance*,U32);

U32 f4(s807r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s807r2Instance*,U32,U32,U32,U32,U32);

void f6(s807r2Instance*,U32);

void f7(s807r2Instance*,U32,U32,U32);

void f8(s807r2Instance*,U32,U32,U32);

void s807r2____wasm_call_ctors(s807r2Instance*i);

void s807r2____wasm_apply_data_relocs(s807r2Instance*i);

U32 s807r2_func_1(s807r2Instance*i);

void s807r2_call_cb(s807r2Instance*i,U32 l0);

void s807r2Instantiate(s807r2Instance* instance, void* resolve(const char* module, const char* name));

void s807r2FreeInstance(s807r2Instance* instance);

#endif /* s807r2_H */

