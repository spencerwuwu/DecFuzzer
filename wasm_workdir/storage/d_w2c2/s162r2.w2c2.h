#ifndef s162r2_H
#define s162r2_H

#include "w2c2_base.h"

typedef struct s162r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s162r2Instance;

void f0(s162r2Instance*);

void f1(s162r2Instance*);

U32 f2(s162r2Instance*);

void f3(s162r2Instance*,U32);

U32 f4(s162r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s162r2Instance*,U32,U32,U32,U32,U32);

void f6(s162r2Instance*,U32);

void f7(s162r2Instance*,U32,U32,U32);

void f8(s162r2Instance*,U32,U32,U32);

void s162r2____wasm_call_ctors(s162r2Instance*i);

void s162r2____wasm_apply_data_relocs(s162r2Instance*i);

U32 s162r2_func_1(s162r2Instance*i);

void s162r2_call_cb(s162r2Instance*i,U32 l0);

void s162r2Instantiate(s162r2Instance* instance, void* resolve(const char* module, const char* name));

void s162r2FreeInstance(s162r2Instance* instance);

#endif /* s162r2_H */

