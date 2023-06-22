#ifndef s318r2_H
#define s318r2_H

#include "w2c2_base.h"

typedef struct s318r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s318r2Instance;

void f0(s318r2Instance*);

void f1(s318r2Instance*);

U32 f2(s318r2Instance*);

void f3(s318r2Instance*,U32);

U32 f4(s318r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s318r2Instance*,U32,U32,U32,U32,U32);

void f6(s318r2Instance*,U32);

void f7(s318r2Instance*,U32,U32,U32);

void f8(s318r2Instance*,U32,U32,U32);

void s318r2____wasm_call_ctors(s318r2Instance*i);

void s318r2____wasm_apply_data_relocs(s318r2Instance*i);

U32 s318r2_func_1(s318r2Instance*i);

void s318r2_call_cb(s318r2Instance*i,U32 l0);

void s318r2Instantiate(s318r2Instance* instance, void* resolve(const char* module, const char* name));

void s318r2FreeInstance(s318r2Instance* instance);

#endif /* s318r2_H */

