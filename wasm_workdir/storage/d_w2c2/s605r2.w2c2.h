#ifndef s605r2_H
#define s605r2_H

#include "w2c2_base.h"

typedef struct s605r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s605r2Instance;

void f0(s605r2Instance*);

void f1(s605r2Instance*);

U32 f2(s605r2Instance*);

void f3(s605r2Instance*,U32);

U32 f4(s605r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s605r2Instance*,U32,U32,U32,U32,U32);

void f6(s605r2Instance*,U32);

void f7(s605r2Instance*,U32,U32,U32);

void f8(s605r2Instance*,U32,U32,U32);

void s605r2____wasm_call_ctors(s605r2Instance*i);

void s605r2____wasm_apply_data_relocs(s605r2Instance*i);

U32 s605r2_func_1(s605r2Instance*i);

void s605r2_call_cb(s605r2Instance*i,U32 l0);

void s605r2Instantiate(s605r2Instance* instance, void* resolve(const char* module, const char* name));

void s605r2FreeInstance(s605r2Instance* instance);

#endif /* s605r2_H */

