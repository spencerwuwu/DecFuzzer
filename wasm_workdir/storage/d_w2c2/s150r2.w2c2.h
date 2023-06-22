#ifndef s150r2_H
#define s150r2_H

#include "w2c2_base.h"

typedef struct s150r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s150r2Instance;

void f0(s150r2Instance*);

void f1(s150r2Instance*);

U32 f2(s150r2Instance*);

void f3(s150r2Instance*,U32);

U32 f4(s150r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s150r2Instance*,U32,U32,U32,U32,U32);

void f6(s150r2Instance*,U32);

void f7(s150r2Instance*,U32,U32,U32);

void f8(s150r2Instance*,U32,U32,U32);

void s150r2____wasm_call_ctors(s150r2Instance*i);

void s150r2____wasm_apply_data_relocs(s150r2Instance*i);

U32 s150r2_func_1(s150r2Instance*i);

void s150r2_call_cb(s150r2Instance*i,U32 l0);

void s150r2Instantiate(s150r2Instance* instance, void* resolve(const char* module, const char* name));

void s150r2FreeInstance(s150r2Instance* instance);

#endif /* s150r2_H */

