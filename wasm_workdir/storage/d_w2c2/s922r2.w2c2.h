#ifndef s922r2_H
#define s922r2_H

#include "w2c2_base.h"

typedef struct s922r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s922r2Instance;

void f0(s922r2Instance*);

void f1(s922r2Instance*);

U32 f2(s922r2Instance*);

void f3(s922r2Instance*,U32);

U32 f4(s922r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s922r2Instance*,U32,U32,U32,U32,U32);

void f6(s922r2Instance*,U32);

void f7(s922r2Instance*,U32,U32,U32);

void f8(s922r2Instance*,U32,U32,U32);

void s922r2____wasm_call_ctors(s922r2Instance*i);

void s922r2____wasm_apply_data_relocs(s922r2Instance*i);

U32 s922r2_func_1(s922r2Instance*i);

void s922r2_call_cb(s922r2Instance*i,U32 l0);

void s922r2Instantiate(s922r2Instance* instance, void* resolve(const char* module, const char* name));

void s922r2FreeInstance(s922r2Instance* instance);

#endif /* s922r2_H */

