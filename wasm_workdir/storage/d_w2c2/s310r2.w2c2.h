#ifndef s310r2_H
#define s310r2_H

#include "w2c2_base.h"

typedef struct s310r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s310r2Instance;

void f0(s310r2Instance*);

void f1(s310r2Instance*);

U32 f2(s310r2Instance*);

void f3(s310r2Instance*,U32);

U32 f4(s310r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s310r2Instance*,U32,U32,U32,U32,U32);

void f6(s310r2Instance*,U32);

void f7(s310r2Instance*,U32,U32,U32);

void f8(s310r2Instance*,U32,U32,U32);

void s310r2____wasm_call_ctors(s310r2Instance*i);

void s310r2____wasm_apply_data_relocs(s310r2Instance*i);

U32 s310r2_func_1(s310r2Instance*i);

void s310r2_call_cb(s310r2Instance*i,U32 l0);

void s310r2Instantiate(s310r2Instance* instance, void* resolve(const char* module, const char* name));

void s310r2FreeInstance(s310r2Instance* instance);

#endif /* s310r2_H */
