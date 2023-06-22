#ifndef s833r2_H
#define s833r2_H

#include "w2c2_base.h"

typedef struct s833r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s833r2Instance;

void f0(s833r2Instance*);

void f1(s833r2Instance*);

U32 f2(s833r2Instance*);

void f3(s833r2Instance*,U32);

void f4(s833r2Instance*,U32);

void s833r2____wasm_call_ctors(s833r2Instance*i);

void s833r2____wasm_apply_data_relocs(s833r2Instance*i);

U32 s833r2_func_1(s833r2Instance*i);

void s833r2_call_cb(s833r2Instance*i,U32 l0);

void s833r2Instantiate(s833r2Instance* instance, void* resolve(const char* module, const char* name));

void s833r2FreeInstance(s833r2Instance* instance);

#endif /* s833r2_H */

