#ifndef s663r2_H
#define s663r2_H

#include "w2c2_base.h"

typedef struct s663r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s663r2Instance;

void f0(s663r2Instance*);

void f1(s663r2Instance*);

U32 f2(s663r2Instance*);

void f3(s663r2Instance*,U32);

U32 f4(s663r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s663r2Instance*,U32,U32,U32,U32,U32);

void f6(s663r2Instance*,U32);

void f7(s663r2Instance*,U32,U32,U32);

void f8(s663r2Instance*,U32,U32,U32);

void s663r2____wasm_call_ctors(s663r2Instance*i);

void s663r2____wasm_apply_data_relocs(s663r2Instance*i);

U32 s663r2_func_1(s663r2Instance*i);

void s663r2_call_cb(s663r2Instance*i,U32 l0);

void s663r2Instantiate(s663r2Instance* instance, void* resolve(const char* module, const char* name));

void s663r2FreeInstance(s663r2Instance* instance);

#endif /* s663r2_H */

