#ifndef s463r2_H
#define s463r2_H

#include "w2c2_base.h"

typedef struct s463r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s463r2Instance;

void f0(s463r2Instance*);

void f1(s463r2Instance*);

U32 f2(s463r2Instance*);

void f3(s463r2Instance*,U32);

U32 f4(s463r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s463r2Instance*,U32,U32,U32,U32,U32);

void f6(s463r2Instance*,U32);

void f7(s463r2Instance*,U32,U32,U32);

void f8(s463r2Instance*,U32,U32,U32);

void s463r2____wasm_call_ctors(s463r2Instance*i);

void s463r2____wasm_apply_data_relocs(s463r2Instance*i);

U32 s463r2_func_1(s463r2Instance*i);

void s463r2_call_cb(s463r2Instance*i,U32 l0);

void s463r2Instantiate(s463r2Instance* instance, void* resolve(const char* module, const char* name));

void s463r2FreeInstance(s463r2Instance* instance);

#endif /* s463r2_H */

