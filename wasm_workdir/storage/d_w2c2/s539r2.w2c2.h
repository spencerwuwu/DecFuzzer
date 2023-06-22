#ifndef s539r2_H
#define s539r2_H

#include "w2c2_base.h"

typedef struct s539r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s539r2Instance;

void f0(s539r2Instance*);

void f1(s539r2Instance*);

U32 f2(s539r2Instance*);

void f3(s539r2Instance*,U32);

U32 f4(s539r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s539r2Instance*,U32,U32,U32,U32,U32);

void f6(s539r2Instance*,U32);

void f7(s539r2Instance*,U32,U32,U32);

void f8(s539r2Instance*,U32,U32,U32);

void s539r2____wasm_call_ctors(s539r2Instance*i);

void s539r2____wasm_apply_data_relocs(s539r2Instance*i);

U32 s539r2_func_1(s539r2Instance*i);

void s539r2_call_cb(s539r2Instance*i,U32 l0);

void s539r2Instantiate(s539r2Instance* instance, void* resolve(const char* module, const char* name));

void s539r2FreeInstance(s539r2Instance* instance);

#endif /* s539r2_H */

