#ifndef s391r2_H
#define s391r2_H

#include "w2c2_base.h"

typedef struct s391r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s391r2Instance;

void f0(s391r2Instance*);

void f1(s391r2Instance*);

U32 f2(s391r2Instance*);

void f3(s391r2Instance*,U32);

U32 f4(s391r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s391r2Instance*,U32,U32,U32,U32,U32);

void f6(s391r2Instance*,U32);

void f7(s391r2Instance*,U32,U32,U32);

void f8(s391r2Instance*,U32,U32,U32);

void s391r2____wasm_call_ctors(s391r2Instance*i);

void s391r2____wasm_apply_data_relocs(s391r2Instance*i);

U32 s391r2_func_1(s391r2Instance*i);

void s391r2_call_cb(s391r2Instance*i,U32 l0);

void s391r2Instantiate(s391r2Instance* instance, void* resolve(const char* module, const char* name));

void s391r2FreeInstance(s391r2Instance* instance);

#endif /* s391r2_H */

