#ifndef s231r2_H
#define s231r2_H

#include "w2c2_base.h"

typedef struct s231r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s231r2Instance;

void f0(s231r2Instance*);

void f1(s231r2Instance*);

U32 f2(s231r2Instance*);

void f3(s231r2Instance*,U32);

U32 f4(s231r2Instance*,U32,U32,U32,U32);

void f5(s231r2Instance*,U32,U32,U32,U32,U32);

void f6(s231r2Instance*,U32);

void f7(s231r2Instance*,U32,U32,U32);

void f8(s231r2Instance*,U32,U32,U32);

void s231r2____wasm_call_ctors(s231r2Instance*i);

void s231r2____wasm_apply_data_relocs(s231r2Instance*i);

U32 s231r2_func_1(s231r2Instance*i);

void s231r2_call_cb(s231r2Instance*i,U32 l0);

void s231r2Instantiate(s231r2Instance* instance, void* resolve(const char* module, const char* name));

void s231r2FreeInstance(s231r2Instance* instance);

#endif /* s231r2_H */

