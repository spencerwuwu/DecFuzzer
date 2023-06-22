#ifndef s191r2_H
#define s191r2_H

#include "w2c2_base.h"

typedef struct s191r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s191r2Instance;

void f0(s191r2Instance*);

void f1(s191r2Instance*);

U32 f2(s191r2Instance*);

void f3(s191r2Instance*,U32);

U32 f4(s191r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s191r2Instance*,U32,U32,U32,U32,U32);

void f6(s191r2Instance*,U32);

void f7(s191r2Instance*,U32,U32,U32);

void f8(s191r2Instance*,U32,U32,U32);

void s191r2____wasm_call_ctors(s191r2Instance*i);

void s191r2____wasm_apply_data_relocs(s191r2Instance*i);

U32 s191r2_func_1(s191r2Instance*i);

void s191r2_call_cb(s191r2Instance*i,U32 l0);

void s191r2Instantiate(s191r2Instance* instance, void* resolve(const char* module, const char* name));

void s191r2FreeInstance(s191r2Instance* instance);

#endif /* s191r2_H */

