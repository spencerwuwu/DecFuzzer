#ifndef s695r2_H
#define s695r2_H

#include "w2c2_base.h"

typedef struct s695r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s695r2Instance;

void f0(s695r2Instance*);

void f1(s695r2Instance*);

U32 f2(s695r2Instance*);

void f3(s695r2Instance*,U32);

U32 f4(s695r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s695r2Instance*,U32,U32,U32,U32,U32);

void f6(s695r2Instance*,U32);

void f7(s695r2Instance*,U32,U32,U32);

void f8(s695r2Instance*,U32,U32,U32);

void s695r2____wasm_call_ctors(s695r2Instance*i);

void s695r2____wasm_apply_data_relocs(s695r2Instance*i);

U32 s695r2_func_1(s695r2Instance*i);

void s695r2_call_cb(s695r2Instance*i,U32 l0);

void s695r2Instantiate(s695r2Instance* instance, void* resolve(const char* module, const char* name));

void s695r2FreeInstance(s695r2Instance* instance);

#endif /* s695r2_H */
