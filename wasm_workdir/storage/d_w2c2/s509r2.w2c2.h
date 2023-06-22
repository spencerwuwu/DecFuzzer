#ifndef s509r2_H
#define s509r2_H

#include "w2c2_base.h"

typedef struct s509r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s509r2Instance;

void f0(s509r2Instance*);

void f1(s509r2Instance*);

U32 f2(s509r2Instance*);

void f3(s509r2Instance*,U32);

U32 f4(s509r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s509r2Instance*,U32,U32,U32,U32,U32);

void f6(s509r2Instance*,U32);

void f7(s509r2Instance*,U32,U32,U32);

void f8(s509r2Instance*,U32,U32,U32);

void s509r2____wasm_call_ctors(s509r2Instance*i);

void s509r2____wasm_apply_data_relocs(s509r2Instance*i);

U32 s509r2_func_1(s509r2Instance*i);

void s509r2_call_cb(s509r2Instance*i,U32 l0);

void s509r2Instantiate(s509r2Instance* instance, void* resolve(const char* module, const char* name));

void s509r2FreeInstance(s509r2Instance* instance);

#endif /* s509r2_H */

