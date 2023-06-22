#ifndef s873r2_H
#define s873r2_H

#include "w2c2_base.h"

typedef struct s873r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s873r2Instance;

void f0(s873r2Instance*);

void f1(s873r2Instance*);

U32 f2(s873r2Instance*);

void f3(s873r2Instance*,U32);

U32 f4(s873r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s873r2Instance*,U32,U32,U32,U32,U32);

void f6(s873r2Instance*,U32);

void f7(s873r2Instance*,U32,U32,U32);

void f8(s873r2Instance*,U32,U32,U32);

void s873r2____wasm_call_ctors(s873r2Instance*i);

void s873r2____wasm_apply_data_relocs(s873r2Instance*i);

U32 s873r2_func_1(s873r2Instance*i);

void s873r2_call_cb(s873r2Instance*i,U32 l0);

void s873r2Instantiate(s873r2Instance* instance, void* resolve(const char* module, const char* name));

void s873r2FreeInstance(s873r2Instance* instance);

#endif /* s873r2_H */

