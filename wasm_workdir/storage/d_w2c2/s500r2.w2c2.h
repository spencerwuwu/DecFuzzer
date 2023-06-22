#ifndef s500r2_H
#define s500r2_H

#include "w2c2_base.h"

typedef struct s500r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s500r2Instance;

void f0(s500r2Instance*);

void f1(s500r2Instance*);

U32 f2(s500r2Instance*);

void f3(s500r2Instance*,U32);

U32 f4(s500r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s500r2Instance*,U32,U32,U32,U32,U32);

void f6(s500r2Instance*,U32);

void f7(s500r2Instance*,U32,U32,U32);

void f8(s500r2Instance*,U32,U32,U32);

void s500r2____wasm_call_ctors(s500r2Instance*i);

void s500r2____wasm_apply_data_relocs(s500r2Instance*i);

U32 s500r2_func_1(s500r2Instance*i);

void s500r2_call_cb(s500r2Instance*i,U32 l0);

void s500r2Instantiate(s500r2Instance* instance, void* resolve(const char* module, const char* name));

void s500r2FreeInstance(s500r2Instance* instance);

#endif /* s500r2_H */

