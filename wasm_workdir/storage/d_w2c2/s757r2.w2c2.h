#ifndef s757r2_H
#define s757r2_H

#include "w2c2_base.h"

typedef struct s757r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s757r2Instance;

void f0(s757r2Instance*);

void f1(s757r2Instance*);

U32 f2(s757r2Instance*);

void f3(s757r2Instance*,U32);

U32 f4(s757r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s757r2Instance*,U32,U32,U32,U32,U32);

void f6(s757r2Instance*,U32);

void f7(s757r2Instance*,U32,U32,U32);

void f8(s757r2Instance*,U32,U32,U32);

void s757r2____wasm_call_ctors(s757r2Instance*i);

void s757r2____wasm_apply_data_relocs(s757r2Instance*i);

U32 s757r2_func_1(s757r2Instance*i);

void s757r2_call_cb(s757r2Instance*i,U32 l0);

void s757r2Instantiate(s757r2Instance* instance, void* resolve(const char* module, const char* name));

void s757r2FreeInstance(s757r2Instance* instance);

#endif /* s757r2_H */

