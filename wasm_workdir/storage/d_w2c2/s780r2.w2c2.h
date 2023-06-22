#ifndef s780r2_H
#define s780r2_H

#include "w2c2_base.h"

typedef struct s780r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s780r2Instance;

void f0(s780r2Instance*);

void f1(s780r2Instance*);

U32 f2(s780r2Instance*);

void f3(s780r2Instance*,U32);

U32 f4(s780r2Instance*,U32,U32,U32,U32,U32);

void f5(s780r2Instance*,U32,U32,U32,U32,U32);

void f6(s780r2Instance*,U32);

void f7(s780r2Instance*,U32,U32,U32);

void f8(s780r2Instance*,U32,U32,U32);

void s780r2____wasm_call_ctors(s780r2Instance*i);

void s780r2____wasm_apply_data_relocs(s780r2Instance*i);

U32 s780r2_func_1(s780r2Instance*i);

void s780r2_call_cb(s780r2Instance*i,U32 l0);

void s780r2Instantiate(s780r2Instance* instance, void* resolve(const char* module, const char* name));

void s780r2FreeInstance(s780r2Instance* instance);

#endif /* s780r2_H */

