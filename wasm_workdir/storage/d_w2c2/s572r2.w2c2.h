#ifndef s572r2_H
#define s572r2_H

#include "w2c2_base.h"

typedef struct s572r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s572r2Instance;

void f0(s572r2Instance*);

void f1(s572r2Instance*);

U32 f2(s572r2Instance*);

void f3(s572r2Instance*,U32);

U32 f4(s572r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s572r2Instance*,U32,U32,U32,U32,U32);

void f6(s572r2Instance*,U32);

void f7(s572r2Instance*,U32,U32,U32);

void f8(s572r2Instance*,U32,U32,U32);

void s572r2____wasm_call_ctors(s572r2Instance*i);

void s572r2____wasm_apply_data_relocs(s572r2Instance*i);

U32 s572r2_func_1(s572r2Instance*i);

void s572r2_call_cb(s572r2Instance*i,U32 l0);

void s572r2Instantiate(s572r2Instance* instance, void* resolve(const char* module, const char* name));

void s572r2FreeInstance(s572r2Instance* instance);

#endif /* s572r2_H */

