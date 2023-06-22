#ifndef s222r2_H
#define s222r2_H

#include "w2c2_base.h"

typedef struct s222r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s222r2Instance;

void f0(s222r2Instance*);

void f1(s222r2Instance*);

U32 f2(s222r2Instance*);

void f3(s222r2Instance*,U32);

U32 f4(s222r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s222r2Instance*,U32,U32,U32,U32,U32);

void f6(s222r2Instance*,U32);

void f7(s222r2Instance*,U32,U32,U32);

void f8(s222r2Instance*,U32,U32,U32);

void s222r2____wasm_call_ctors(s222r2Instance*i);

void s222r2____wasm_apply_data_relocs(s222r2Instance*i);

U32 s222r2_func_1(s222r2Instance*i);

void s222r2_call_cb(s222r2Instance*i,U32 l0);

void s222r2Instantiate(s222r2Instance* instance, void* resolve(const char* module, const char* name));

void s222r2FreeInstance(s222r2Instance* instance);

#endif /* s222r2_H */

