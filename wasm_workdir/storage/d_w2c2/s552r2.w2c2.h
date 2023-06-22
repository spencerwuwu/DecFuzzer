#ifndef s552r2_H
#define s552r2_H

#include "w2c2_base.h"

typedef struct s552r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s552r2Instance;

void f0(s552r2Instance*);

void f1(s552r2Instance*);

U32 f2(s552r2Instance*);

void f3(s552r2Instance*,U32);

U32 f4(s552r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s552r2Instance*,U32,U32,U32,U32,U32);

void f6(s552r2Instance*,U32);

void f7(s552r2Instance*,U32,U32,U32);

void f8(s552r2Instance*,U32,U32,U32);

void s552r2____wasm_call_ctors(s552r2Instance*i);

void s552r2____wasm_apply_data_relocs(s552r2Instance*i);

U32 s552r2_func_1(s552r2Instance*i);

void s552r2_call_cb(s552r2Instance*i,U32 l0);

void s552r2Instantiate(s552r2Instance* instance, void* resolve(const char* module, const char* name));

void s552r2FreeInstance(s552r2Instance* instance);

#endif /* s552r2_H */

