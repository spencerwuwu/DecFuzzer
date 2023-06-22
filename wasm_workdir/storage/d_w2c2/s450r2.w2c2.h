#ifndef s450r2_H
#define s450r2_H

#include "w2c2_base.h"

typedef struct s450r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s450r2Instance;

void f0(s450r2Instance*);

void f1(s450r2Instance*);

U32 f2(s450r2Instance*);

void f3(s450r2Instance*,U32);

U32 f4(s450r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s450r2Instance*,U32,U32,U32,U32,U32);

void f6(s450r2Instance*,U32);

void f7(s450r2Instance*,U32,U32,U32);

void f8(s450r2Instance*,U32,U32,U32);

void s450r2____wasm_call_ctors(s450r2Instance*i);

void s450r2____wasm_apply_data_relocs(s450r2Instance*i);

U32 s450r2_func_1(s450r2Instance*i);

void s450r2_call_cb(s450r2Instance*i,U32 l0);

void s450r2Instantiate(s450r2Instance* instance, void* resolve(const char* module, const char* name));

void s450r2FreeInstance(s450r2Instance* instance);

#endif /* s450r2_H */

